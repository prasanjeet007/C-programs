#include <iostream>
using namespace std;
int main()
{
    int arr[] = {34, 56, 89, 90, 44, 79, 99};
    int length = sizeof(arr) / sizeof(int);
    int left = 0;
    int right = length - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for (int inx = 0; inx < length; inx++)
    {
        cout << arr[inx] << " ";
    }
    cout << endl;
    return 0;
}