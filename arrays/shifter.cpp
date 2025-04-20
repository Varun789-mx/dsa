#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int i = 0;
    int j = nums.size() - 1;
    if (k > nums.size()) {
      k = k % nums.size();
    }
    Rotater(nums, k, i, j);
    i = 0;
    j = k - 1;
    Rotater(nums, k, i, j);
    i = k;
    j = nums.size() - 1;
    Rotater(nums, k, i, j);
  }
  void Rotater(vector<int> &nums, int k, int i, int j) {
    while (i < j) {
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
      i++;
      j--;
    }
  }
};

int main() {
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  int k = 3;
  solution ans;
  ans.shifter(nums, k);
  return 0;
}
