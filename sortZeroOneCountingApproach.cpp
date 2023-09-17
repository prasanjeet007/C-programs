#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0};
    int zeroCount = 0;
    int oneCount = 0;
    int length = sizeof(arr) / sizeof(int);
    int newIndex;
    for (int inx = 0; inx < length; inx++)
    {
        if (arr[inx] == 0)
        {
            zeroCount++;
        }
        if (arr[inx] == 1)
        {
            oneCount++;
        }
    }
    for (newIndex = 0; newIndex < zeroCount; newIndex++)
    {
        arr[newIndex] = 0;
    }
    for (int j = newIndex; j < length; j++)
    {
        arr[j] = 1;
    }
    for (int k = 0; k < length; k++)
    {
        cout << arr[k] << " ";
    }
    return 0;
}
