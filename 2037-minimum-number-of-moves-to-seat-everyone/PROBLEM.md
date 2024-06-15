# 2037. Minimum Number of Moves to Seat Everyone

![LeetCode Easy](https://honey.badgers.space/badge/difficulty/easy/green)

## Topics

![Array](https://honey.badgers.space/badge/github/Array/blue?icon=feather-tag&label=)
![Greedy](https://honey.badgers.space/badge/github/Greedy/blue?icon=feather-tag&label=)
![Sorting](https://honey.badgers.space/badge/github/Sorting/blue?icon=feather-tag&label=)

## Description

There are <code>n</code> seats and <code>n</code> students in a room. You are given an array <code>seats</code> of length <code>n</code>, where <code>seats[i]</code> is the position of the <code>i<sup>th</sup></code> seat. You are also given the array <code>students</code> of length <code>n</code>, where <code>students[j]</code> is the position of the <code>j<sup>th</sup></code> student.

You may perform the following move any number of times:

- Increase or decrease the position of the <code>i<sup>th</sup></code> student by 1 (i.e., moving the <code>i<sup>th</sup></code> student from position <code>x</code> to <code>x + 1</code> or <code>x - 1</code>)

Return *the **minimum number of moves** required to move each student to a seat such that no two students are in the same seat*.

Note that there may be **multiple** seats or students in the **same** position at the beginning.

## Constraints

- <code>n == seats.length == student.length</code>
- <code>1 &le; n &le; 100</code>
- <code>1 &le; seats[i], students[j] &le; 100</code>

