from typing import List
class Solution:
  def heightChecker(self, heights: List[int]) -> int:
    return sum([wrong != expect for wrong, expect in zip(heights, sorted(heights))])

