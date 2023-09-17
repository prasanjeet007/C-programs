#include <iostream>
using namespace std;
int main()
{
    int arr[] = {34, 44, 54, 64, 74, 84};
    int length = sizeof(arr) / sizeof(int);
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << endl;
        }
        else
        {
            cout << arr[left] << endl;
            cout << arr[right] << endl;
        }
        left++;
        right--;
    }
    return 0;
}