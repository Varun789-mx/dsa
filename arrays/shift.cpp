 #include<iostream>

 using namespace std;

 void shift(int i, int j, int arr[]) {
   while (i < j) {
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
     i++;
     j--;
   }
 }
 void printer(int arr[], int len) {
   for (int i = 0; i < len; i++) {
     cout << " " << arr[i];
   }
   cout << endl;
 }

 int main() {
   cout << "Input: arr[] = {1, 2, 3, 4, 5, 6, 7}, k = Output: {5, 6, 7, 1, 2, 3, 4}" << endl;
   int arr[] = {
     1,
     2,
     3,
     4,
     5,
     6,
     7
   };
   int k = 3;
   int len = sizeof(arr) / sizeof(arr[0]);
   int i = 0;
   int j = len - 1;
   cout << "Before" << endl;
   printer(arr, len);
   cout << "Step 1" << endl;
   shift(i, j, arr);
   printer(arr, len);
   j = k - 1;
   shift(i, j, arr);
   cout << "Step 2" << endl;
   printer(arr, len);
   cout << endl;
   cout << "Step 3" << endl;
   j = len - 1;
   i = k;
   shift(i, j, arr);
   printer(arr, len);
   cout << endl;
 }
