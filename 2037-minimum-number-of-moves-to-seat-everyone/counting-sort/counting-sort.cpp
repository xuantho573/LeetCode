#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
  int minMovesToSeat(vector<int> &seats, vector<int> &students) {
    int m = max(*max_element(seats.begin(), seats.end()),
                *max_element(students.begin(), students.end())),
        res = 0;
    vector<int> count(m + 1, 0);
    for (int seat : seats)
      count[seat]++;
    for (int student : students)
      count[student]--;
    for (int i = 1; i <= m; i++) {
      count[i] += count[i - 1];
      res += abs(count[i]);
    }
    return res;
  }
};
