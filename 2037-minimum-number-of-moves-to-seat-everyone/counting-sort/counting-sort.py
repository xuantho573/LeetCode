from typing import List

class Solution:
  def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
    m = max(seats + students)
    res = 0
    count = [0] * (m + 1)
    for seat in seats:
      count[seat] += 1
    for student in students:
      count[student] -= 1
    for i in range(1, m + 1):
      count[i] += count[i - 1]
      res += abs(count[i])
    return res
