# Paper Folding – Crease Direction

A C++ solution to the classic **paper folding** problem.

When a strip of paper is folded `n` times (always in the same direction), it creates `2ⁿ − 1` creases. Given the fold count `n` and a crease position `x` (1-indexed, left to right), determine whether that crease is a **Valley** or a **Mountain**.

---

## Files

| File | Description |
|------|-------------|
| `task_2.cpp` | Core logic – `get_crease(n, x)` and `getCrease(n, x)` |
| `task_2_test.cpp` | Test harness using `assert` |

---

## How to Run

### Requirements
- A C++ compiler that supports C++11 or later (e.g. `g++` via [MinGW](https://www.mingw-w64.org/) on Windows or GCC on Linux/macOS)

### Compile & Run Tests

**Linux / macOS / Git Bash:**
```bash
g++ -o task_2_test task_2_test.cpp && ./task_2_test
```

**Windows (PowerShell):**
```powershell
g++ -o task_2_test task_2_test.cpp; if ($LASTEXITCODE -eq 0) { .\task_2_test.exe }
```

**Expected output:**
```
All test cases passed!
```

---

## API

```cpp
// Returns "Valley" or "Mountain"
string getCrease(int n, int x);
```

| Parameter | Description |
|-----------|-------------|
| `n` | Number of folds (≥ 1) |
| `x` | Crease position, 1-indexed from the left (1 ≤ x ≤ 2ⁿ − 1) |

### Example

```cpp
getCrease(1, 1)  // → "Valley"
getCrease(2, 3)  // → "Mountain"
getCrease(4, 11) // → "Mountain"
```

---

## How It Works

The recursive insight is:
- The **middle crease** of any fold is always a **Valley**.
- Creases in the **left half** mirror the previous fold unchanged.
- Creases in the **right half** mirror the previous fold with direction **flipped**.
