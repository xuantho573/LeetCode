class Solution {
private:
  static map<int, int> d;

public:
  static void init(vector<int>& arr) {
    d.clear();
    for(int i = 0; i < arr.size(); i++) d[arr[i]] = i;
  }

  static bool compare(int num1, int num2){
    if(d.count(num1) && d.count(num2)) return d[num1] < d[num2];
    else if(d.count(num1)) return true;
    else if(d.count(num2)) return false;
    else return num1 < num2;
  }

  vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    vector<int> res = arr1;
    Solution::init(arr2);
    sort(res.begin(), res.end(), Solution::compare);
    return res;
  }
};

map<int, int> Solution::d;
