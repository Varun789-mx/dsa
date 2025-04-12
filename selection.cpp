#include <iostream>

using namespace std;
int main() {
  int arr[] = {1, 6, 2, 5, 8, 2, 698, 25, 0};
  int len = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < len; i++) {
    int min = i;
    for (int j = i + 1; j < len; j++) {
      if (arr[j] < arr[min])
        min = j;
    }

    if (min != i) {
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
    }
  }

  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
}
