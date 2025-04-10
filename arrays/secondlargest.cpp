#include <iostream>
using namespace std;

int main()
{
    int max = 0;
    int smax = 0;
    int arr[] = {9, 7, 1, 1, 0, 1, 8, 7, 8, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax && arr[i] != max)
        {
            smax = arr[i];
        }
    }
    cout <<"Max :"<< max<<endl;
    cout << "Second max:"<<smax<<endl;
}
