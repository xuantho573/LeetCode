# 1051. Height Checker

![LeetCode Easy](https://honey.badgers.space/badge/difficulty/easy/green)

## Topics

![Array](https://honey.badgers.space/badge/github/Array/blue?icon=feather-tag&label=)
![Counting Sort](https://honey.badgers.space/badge/github/Counting%20Sort/blue?icon=feather-tag&label=)
![Sorting](https://honey.badgers.space/badge/github/Sorting/blue?icon=feather-tag&label=)

## Description

A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in **non-decreasing order** by height. Let this ordering be represented by the integer array <code>expected</code> where <code>expected[i]</code> is the expected height of the <code>i<sup>th</sup></code> student in line.

You are given an integer array <code>heights</code> representing the **current order** that the students are standing in. Each <code>heights[i]</code> is the height of the <code>i<sup>th</sup></code> student in line **(0-indexed)**.

Return *the **number of indices** where* <code>heights[i] != expected[i]</code>.

## Constraints

- <code>1 &le; heights.length &le; 100</code>
- <code>1 &le; heights[i] &le; 100</code>

