# 1051. Height Checker

![LeetCode Easy](https://honey.badgers.space/badge/difficulty/easy/green)

## Topics

![Array](https://honey.badgers.space/badge/github/Array/blue?icon=feather-tag&label=)
![Counting Sort](https://honey.badgers.space/badge/github/Counting%20Sort/blue?icon=feather-tag&label=)
![Sorting](https://honey.badgers.space/badge/github/Sorting/blue?icon=feather-tag&label=)

## Description

A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in **non-decreasing order** by height. Let this ordering be represented by the integer array `expected` where `expected[i]` is the expected height of the i<sup>th</sup> student in line.

You are given an integer array `heights` representing the **current order** that the students are standing in. Each `heights[i]` is the height of the i<sup>th</sup> student in line **(0-indexed)**.

Return *the **number of indices** where* `heights[i] != expected[i]`.

## Constraints

- 1 &le; heights.length &le; 100
- 1 &le; heights[i] &le; 100

