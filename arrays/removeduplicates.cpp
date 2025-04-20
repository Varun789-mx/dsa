#include <iostream>
#include <vector>

using namespace std;

class solution {
public:
  int RemoveDuplicate(vector<int> &nums) {
    int l = 1;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i] != nums[i - 1]) {
        nums[l] = nums[i];
        l++;
      }
    }
    return l;
  }
};

int main() {
  vector<int> nums = {1, 1, 1, 2};
  solution res;
  cout << res.RemoveDuplicate(nums) << endl;
  return 0;
}
