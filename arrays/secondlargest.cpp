#include <iostream>

using namespace std;

int main() {
  int arr[] = {1, 3, 4, 2, 4, 2, 4, 9};
  int len = sizeof(arr) / sizeof(arr[0]);

  int max = -1;
  int smax = -1;
  for (int i = 0; i < len; i++) {
    if (max < arr[i]) {
      smax = max;
      max = arr[i];
    } else if (arr[i] > smax && arr[i] != max) {
      smax = arr[i];
    }
  }

  cout << max << endl;
  cout << smax << endl;
}
