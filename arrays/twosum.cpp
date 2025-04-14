#include <iostream>

using namespace std;

int *sum(int arr[], int len, int target) {
  int *res = new int[2];
  for (int i = 0; i < len; i++) {
    for (int j = 1; j < len; j++) {
      if (arr[i] + arr[j] == target) {
        res[0] = i;
        res[1] = j;
        return res;
        break;
      }
    }
  }
  return;
}

int main() {
  int target = 9;
  int name = "harsh";

  int arr[] = {2, 7, 11, 15};
  int len = sizeof(arr) / sizeof(arr[0]);
  int res = sum(arr, len, target);
  cout << res << endl;
}
