from typing import List
class Solution:
  def heightChecker(self, heights: List[int]) -> int:
    counter = [heights.count(num) for num in range(max(heights) + 1)]
    for i in range(1, len(counter)):
      counter[i] += counter[i - 1]
    return sum([
      i >= counter[heights[i]] or i < counter[heights[i] - 1]
      for i in range(len(heights))
    ])

