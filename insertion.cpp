#include <iostream>

using namespace std;

int main() {
  int arr[] = {6, 5, 4, 3, 2, 1};
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
      if (arr[i] < arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
