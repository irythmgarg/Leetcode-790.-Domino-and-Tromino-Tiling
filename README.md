# Leetcode-790.-Domino-and-Tromino-Tiling
# 🎲 Domino and Tromino Tiling 🎲

## 📘 Problem Statement

You're given an integer `n`, representing the width of a 2 x n board. Your task is to determine **how many ways you can tile the board** using:

* 🟦 Dominoes: 2 x 1 tiles
* 🧩 Trominoes: L-shaped tiles (which cover three squares)

Return the number of ways to tile the board **modulo 10^9 + 7**.

---

## 🧪 Example

**Input:** `n = 3`
**Output:** `5`

**Explanation:**

1. Three vertical dominoes
2. One horizontal domino on top + two vertical below
3. Two vertical dominoes + one horizontal on top
4. One L-tromino
5. The mirror of the L-tromino

---

## 🚀 Approach: Dynamic Programming

### 🧠 Intuition

We break the problem into smaller subproblems:

* Let `dp[i]` represent the number of ways to tile a `2 x i` board.
* We derive a recurrence based on how we can extend the solution from smaller boards.

### 🔁 Recurrence Relation

```
dp[i] = 2 * dp[i - 1] + dp[i - 3]
```

📌 **Why this recurrence?**

* `2 * dp[i - 1]` covers:

  * Adding a vertical domino at the end
  * Adding a tromino in two configurations
* `dp[i - 3]` adds unique configurations that become possible when placing one L-shaped tromino combined with previous tiles.

---

## 🧮 Base Cases

* `dp[1] = 1` → Only vertical domino
* `dp[2] = 2` → Two vertical dominoes or two horizontal dominoes
* `dp[3] = 5` → Precomputed by hand or logic

---

## ⏱️ Time and Space Complexity

| Complexity | Value |
| ---------- | ----- |
| 🕒 Time    | O(n)  |
| 💾 Space   | O(n)  |

> Can be optimized to O(1) space by storing only the last 3 values 🔄

---

## 🔍 Comparison With Other Problems

* Similar to classic tiling problems, but trominoes introduce non-linear recursion.
* Combines ideas from Fibonacci-style DP and more complex shape transitions.

---

## 👨‍💻 Author Info

* **Name**: Ridham Garg
* **Roll Number**: 102203014
* **University**: Thapar University, Patiala

🛠️ Brought to you by a 50-year README design veteran 😉📄💪

---

## 🎯 Final Thoughts

This problem is a great example of:

* Modeling complex shapes using simple recurrence
* Using base cases effectively
* Thinking recursively and reducing overlapping subproblems

🏁 Master this and you'll be one step closer to DP mastery! 🧙‍♂️✨
