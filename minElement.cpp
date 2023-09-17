#include <iostream>
#include <limits.h>
using namespace std;
void minElement(int arr[], int length)
{
    int minElement = INT_MAX;
    for (int inx = 0; inx < length; inx++)
    {
        if (arr[inx] < minElement)
        {
            minElement = arr[inx];
        }
    }
    cout << minElement << endl;
}
int main()
{
    int arr[] = {34, 78, 32, 12, 19, 18, 56, 99, 101, 341};
    int size = sizeof(arr) / sizeof(int);
    minElement(arr, size);
    return 0;
}