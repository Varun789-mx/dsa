#include <iostream>
using namespace std;
int main()
{
    int arr[] = {9, 9, 3,9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int a = 0;
    bool flag = false;
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
            else
            {
                flag = false;
            }
        }
    }
    if (!flag)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }
}
