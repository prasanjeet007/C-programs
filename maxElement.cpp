#include <iostream>
#include <limits.h>
using namespace std;
void maxElement(int arr[], int length)
{
    int maxElement = INT_MIN;
    for (int inx = 0; inx < length; inx++)
    {
        if (arr[inx] > maxElement)
        {
            maxElement = arr[inx];
        }
    }
    cout << maxElement << endl;
}
int main()
{
    int arr[] = {34, 78, 32, 12, 19, 18, 56, 99, 101, 341};
    int size = sizeof(arr) / sizeof(int);
    maxElement(arr, size);
    return 0;
}