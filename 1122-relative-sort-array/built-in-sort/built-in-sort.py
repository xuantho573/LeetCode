from typing import List
class Solution:
  def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
    d = {num : i for i, num in enumerate(arr2)}
    return list(sorted(arr1, key = lambda x: (d.get(x, float('inf')), x)))

