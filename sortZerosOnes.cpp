#include <iostream>
using namespace std;
void sortZerosOnes(int arr[], int length)
{
    int left = 0;
    int right = length - 1;
    for (int inx = 0; inx < length; inx++)
    {
        while (left < right)
        {
            if (arr[inx] == 0)
            {
                swap(arr[inx], arr[left]);
                inx++;
                left++;
            }
            else
            {
                swap(arr[inx], arr[right]);
                inx++;
                right--;
            }
        }
    }
    for (int inx = 0; inx < length; inx++)
    {
        cout << arr[inx];
    }
    cout << endl;
}
int main()
{
    int arr[] = {0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int size = sizeof(arr) / sizeof(int);
    sortZerosOnes(arr, size);
    return 0;
}