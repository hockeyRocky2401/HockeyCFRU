# scripts/gen_item_desc.py — Python 3.7 compatible
from pathlib import Path
import re

# --- your locations ---
SRC  = Path("strings/item_descriptions.string")     # your .string file
COUT = Path("src/generated/item_desc_auto.c")       # source: actual string definitions
# ----------------------

COUT.parent.mkdir(parents=True, exist_ok=True)

text = SRC.read_text(encoding="utf-8", errors="ignore")

# Normalize edge cases: BOM, accidental uppercase markers, mixed whitespace
text = text.lstrip("\ufeff")
text = re.sub(r'(?mi)^#ORG', '#org', text)  # normalize uppercase markers

# Regex: capture label + body until the next #org or EOF
block_re = re.compile(
    r'(?ms)^\s*#org\s+@'
    r'(DESC_[A-Z0-9_]+)\s*\r?\n'   # group 1: label
    r'(.*?)(?=^\s*#org\s+@|\Z)'    # group 2: body up to next or EOF
)

entries = []
for m in block_re.finditer(text):
    name = m.group(1)                # e.g., DESC_FLOAT_STONE
    body = m.group(2).rstrip()
    # Minimal mapping: keep \n, convert \e -> é (tweak if needed)
    body = body.replace("\\e", "é")
    entries.append((name, body))

def c_escape(s: str) -> str:
    return s.replace('"', '\\"')  # escape quotes, keep backslashes

# ----- source (.c): definitions -----
c = []
c.append("// AUTO-GENERATED. DO NOT EDIT.\n")
c.append('#include "../../include/global.h"\n\n')

for desc_name, body in entries:
    # Flatten physical newlines; only explicit "\n" markers should create line breaks
    flat = " ".join(body.splitlines())
    c.append(f'const u8 {desc_name}[] = "{c_escape(flat)}";\n\n')

# Write file
COUT.write_text("".join(c), encoding="utf-8")

# Small report
names = [n for (n, _) in entries]
print(f"Wrote {COUT} with {len(entries)} entries.")
for probe in ["DESC_FLOAT_STONE","DESC_ROCKY_HELMET","DESC_AIR_BALLOON","DESC_RED_CARD","DESC_PORTABLE_PC"]:
    print(probe, "->", "FOUND" if probe in names else "MISSING")
