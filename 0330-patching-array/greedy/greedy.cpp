#include <vector>

using namespace std;

class Solution {
public:
  int minPatches(vector<int> &nums, int n) {
    long curSum = 0;
    int idx = 0, m = nums.size(), res = 0;
    while (curSum < n)
      if (idx < m && nums[idx] <= curSum + 1) {
        curSum += nums[idx];
        idx++;
      } else {
        curSum += curSum + 1;
        res++;
      }
    return res;
  }
};
