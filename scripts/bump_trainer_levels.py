import re
import sys
from pathlib import Path
import shutil

# Usage:
#   python tools/bump_trainer_levels.py src/data/trainer_parties.h
#   python tools/bump_trainer_levels.py src/data/trainers/   (a folder)

LEVEL_FIELDS = (".lvl", ".level")
THRESHOLD = 24
BUMP = 2
CAP = 100

# Regex matches ".lvl = 27," or ".level=27," with optional spaces
pattern = re.compile(
    r"(?P<prefix>\.(?:lvl|level)\s*=\s*)(?P<num>\d{1,3})(?P<suffix>\s*,)",
    flags=re.IGNORECASE
)

def bump(match: re.Match) -> str:
    num = int(match.group("num"))
    if num > THRESHOLD and num < CAP:  # allow bump; we'll cap after add
        num = min(num + BUMP, CAP)
    return f"{match.group('prefix')}{num}{match.group('suffix')}"

def process_file(path: Path):
    text = path.read_text(encoding="utf-8", errors="ignore")
    new_text = pattern.sub(bump, text)
    if new_text != text:
        backup = path.with_suffix(path.suffix + ".bak")
        if not backup.exists():
            shutil.copy2(path, backup)
        path.write_text(new_text, encoding="utf-8")
        return True
    return False

def main():
    if len(sys.argv) != 2:
        print("Usage: python bump_trainer_levels.py <file-or-folder>")
        sys.exit(1)

    target = Path(sys.argv[1])
    changed = 0

    if target.is_dir():
        for p in target.rglob("*"):
            if p.suffix in {".h", ".c", ".inc"} and p.is_file():
                try:
                    if process_file(p):
                        changed += 1
                        print(f"Updated: {p}")
                except Exception as e:
                    print(f"Error updating {p}: {e}")
    elif target.is_file():
        if process_file(target):
            changed = 1
            print(f"Updated: {target}")
        else:
            print("No changes needed.")
    else:
        print("Path not found.")

    print(f"Done. Files modified: {changed}")

if __name__ == "__main__":
    main()
