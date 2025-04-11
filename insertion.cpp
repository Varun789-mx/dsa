#include <iostream>

using namespace std;

int main() {
  int arr[] = {6, 5, 4, 3, 2, 1};
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 1; i < len; i++) {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && temp < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }

  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
