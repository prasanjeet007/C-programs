#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int inx = 0;
    int k = 2;
    int size = sizeof(arr) / sizeof(int);
    int newArray[size];
    for (int inx = 0; inx < size; inx++)
    {
        int newIndex = (inx + k) % size;
        newArray[newIndex] = arr[inx];
    }
    for (int inx = 0; inx < size; inx++)
    {
        cout << newArray[inx] << " ";
    }
    return 0;
}