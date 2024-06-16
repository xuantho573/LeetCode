from typing import List

class Solution:
  def minPatches(self, nums: List[int], n: int) -> int:
    curSum = res = idx = 0
    m = len(nums)
    while curSum < n:
      if idx < m and nums[idx] <= curSum + 1:
        curSum += nums[idx]
        idx += 1
      else:
        curSum += curSum + 1
        res += 1
    return res
