#include <iostream>
#include <vector>

using namespace std;

class solution {
public:
  void moveZeroes(vector<int> &nums) {
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        swap(nums[i], nums[j]);
        j++;
      }
    }
    printer(nums);
  }

  void printer(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
      cout << nums[i] << " ";
    }
  }
};

int main() {
  vector<int> nums = {0, 0, 0, 1, 3, -2};
  solution ans;
  ans.moveZeroes(nums);
  cout << endl;
  return 0;
}
