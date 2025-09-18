import re, sys, shutil
from pathlib import Path

THRESHOLD = 24
BUMP = 2
CAP = 100

def bump(n: int) -> int:
    if n > THRESHOLD:
        n = min(n + BUMP, CAP)
    return n

# Match {min, max, SPECIES_X}
pattern = re.compile(
    r'(\{\s*)(\d{1,3})(\s*,\s*)(\d{1,3})(\s*,\s*SPECIES_[A-Z0-9_]+\s*\})'
)

def repl(m: re.Match) -> str:
    prefix, min_str, mid, max_str, suffix = m.groups()
    min_lvl = bump(int(min_str))
    max_lvl = bump(int(max_str))
    if min_lvl > max_lvl:  # sanity check
        min_lvl, max_lvl = max_lvl, min_lvl
    return f"{prefix}{min_lvl}{mid}{max_lvl}{suffix}"


def process_file(path: Path) -> bool:
    text = path.read_text(encoding="utf-8", errors="ignore")
    new_text = pattern.sub(repl, text)
    if new_text != text:
        backup = path.with_suffix(path.suffix + ".bak")
        if not backup.exists():
            shutil.copy2(path, backup)
        path.write_text(new_text, encoding="utf-8")
        return True
    return False

def main():
    if len(sys.argv) != 2:
        print("Usage: python bump_wild_levels.py <file-or-folder>")
        sys.exit(1)

    target = Path(sys.argv[1])
    changed = 0

    if target.is_dir():
        for p in target.rglob("*.h"):
            if process_file(p):
                print(f"Updated: {p}")
                changed += 1
    elif target.is_file():
        if process_file(target):
            print(f"Updated: {target}")
            changed = 1
        else:
            print("No changes needed.")
    else:
        print("Path not found.")
        sys.exit(1)

    print(f"Done. Files modified: {changed}")

if __name__ == "__main__":
    main()