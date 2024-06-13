# 2037. Minimum Number of Moves to Seat Everyone

![LeetCode Easy](https://honey.badgers.space/badge/difficulty/easy/green)

## Topics

![Array](https://honey.badgers.space/badge/github/Array/blue?icon=feather-tag&label=)
![Greedy](https://honey.badgers.space/badge/github/Greedy/blue?icon=feather-tag&label=)
![Sorting](https://honey.badgers.space/badge/github/Sorting/blue?icon=feather-tag&label=)

## Description

There are `n` seats and `n` students in a room. You are given an array `seats` of length `n`, where `seats[i]` is the position of the i<sup>th</sup> seat. You are also given the array `students` of length `n`, where `students[j]` is the position of the j<sup>th</sup> student.

You may perform the following move any number of times:

- Increase or decrease the position of the i<sup>th</sup> student by 1 (i.e., moving the i<sup>th</sup> student from position `x` to `x + 1` or `x - 1`)

Return *the **minimum number of moves** required to move each student to a seat such that no two students are in the same seat*.

Note that there may be **multiple** seats or students in the **same** position at the beginning.

## Constraints

- n == seats.length == student.length
- 1 &le; n &le; 100
- 1 &le; seats[i], students[j] &le; 100

