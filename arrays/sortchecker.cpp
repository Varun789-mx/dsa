#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool Checker(vector<int> &arr) {
  bool flag = true;
  for (int i = 0; i < arr.size() - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      flag = false;
      return flag;
    }
  }
  return flag;
}

int main() {
  vector<int> nums = {1, 2, 3, 4, 5};
  vector<int> arr = {1, 4, 6, 2, 6, 2, 6};

  if (!Checker(nums)) {
    cout << "False" << endl;
  } else {
    cout << "True" << endl;
  }
}
