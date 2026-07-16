# Paper Folding – Task 2

## Algorithm

When a strip of paper is folded `n` times, it produces `2ⁿ - 1` creases.

The direction of each crease is determined recursively:
- The **middle crease** is always a **Valley**
- Creases in the **left half** → same as the previous fold
- Creases in the **right half** → mirrored and **flipped** (Valley ↔ Mountain)

## Time & Space Complexity

- **Time:** O(n) — one recursive call per fold level
- **Space:** O(n) — recursion stack depth

## How to Run

**Compile:**
```bash
g++ -o task_2_test task_2_test.cpp
```

**Run:**
```bash
# Linux / macOS
./task_2_test

# Windows (PowerShell)
.\task_2_test.exe
```

**Expected output:**
```
All test cases passed!
```

## Output

![All test cases passed](Screenshot%202026-07-16%20063029.png)
