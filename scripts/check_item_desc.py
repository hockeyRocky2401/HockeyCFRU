import re, sys
from pathlib import Path

# Adjust these to your repo
ITEMS_SRC_DIRS = ["src", "src"]           # where .description = DESC_* lives
STRINGS_FILE   = Path("strings/item_descriptions.string")

# 1) collect needed DESC_* from C sources
need = set()
desc_pat = re.compile(r'\.description\s*=\s*(DESC_[A-Z0-9_]+)')
for root in ITEMS_SRC_DIRS:
    for p in Path(root).rglob("*.c"):
        txt = p.read_text(encoding="utf-8", errors="ignore")
        need.update(desc_pat.findall(txt))
    for p in Path(root).rglob("*.h"):
        txt = p.read_text(encoding="utf-8", errors="ignore")
        need.update(desc_pat.findall(txt))

# 2) collect available DESC_* from .string (#org @DESC_...)
have = set()
if STRINGS_FILE.exists():
    s = STRINGS_FILE.read_text(encoding="utf-8", errors="ignore")
    have.update(re.findall(r'(?m)^#org\s+@(DESC_[A-Z0-9_]+)\b', s))
else:
    print(f"Missing strings file: {STRINGS_FILE}", file=sys.stderr)
    sys.exit(2)

missing = sorted(need - have)
extra   = sorted(have - need)

print(f"Total referenced in code: {len(need)}")
print(f"Total provided in .string: {len(have)}")
if missing:
    print("\nMissing in .string (referenced but not defined):")
    for m in missing: print("  ", m)
if extra:
    print("\nUnused in .string (defined but not referenced):")
    for e in extra: print("  ", e)

sys.exit(1 if missing else 0)
