# Dynamic Programming
## Examples
- Longest Increasing Subsequence (LIS)

Given a sequence of numbers, determine the length of the longest increasing subsequence. 
<br><br>
For example, the LIS of `[1, 5, 2, 4, 3]` is `[1, 2, 3]`.
```
```
- Longest Common Subsequence (LCS)

Given two sequences, find the longest common subsequence.
<br><br>
For example, the LCS of `properties` and `prosperity` is `properi`.
```
```
- Edit Distance

Given two sequences, and you can perform 3 operations on one of the sequences:
1. Insertion: add an element at the end of the sequence.
2. Deletion: remove the last element of the sequence.
3. Substitution: replace the last element of the sequence with another element.

What is the minimum number of operations to make the two sequences identical?
<br><br>
For example, the edit distance of `eleplant` and `relevant` is 3 (how?).
```
```
- Subset Sum

Given a set of numbers `S` and a number `n`. Determine whether there exists a subset `S'` of `S` such that the sum of elements in `S'` is `n`.
```
```
- 0-1 Knapsack Problem

Given a set of goods S = {s<sub>1</sub>, s<sub>2</sub>, ..., s<sub>n</sub>,}, each associated with a weight w<sub>i</sub> and a value v<sub>i</sub>. What is the maximum value of goods that can be collected such that their total weight doesn't exceed a given threshold W?

```
```
- Coin Change Problem
```
```
- Cutting a Rod
```
```
- Egg Dropping Problem

Suppose there are 100 floors and you are given some number of identical eggs. You are asked to determine the endurance of each egg, that is, the highest floor that the egg is dropped from and not broken. You can drop the eggs on whichever floor you decide. Whenever you break an egg, you lose an egg.
<br><br>
1. What is the optimal strategy if you are given only **1** egg? Determine the maximum number of egg drops.
2. What is the optimal strategy if you are given an **infinite number** of eggs? Determine the maximum number of egg drops.
3. What is the optimal strategy if you are given **2** eggs? Determine the maximum number of egg drops.
4. Determine the maximum number of egg drops if you have `k` eggs and `n` floors (let it be `f(n,k)`). Express your result in a recursive fashion.
```
```