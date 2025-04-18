#include <iostream>

using namespace std;

int main() {
  int arr[] = {9, 7, 1, 1, 0, 1, 8, 7, 8, 0};
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len - 1; i++) {
    for (int j = 0; j < len - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < len; i++) {
    cout << " " << arr[i];
  }
  cout << endl;
  return 0;
}
