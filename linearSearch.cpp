#include <iostream>
using namespace std;
bool linearSearch(int arr[], int target, int size)
{
    for (int inx = 0; inx < size; inx++)
    {
        if (arr[inx] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {34, 12, 56, 89, 77, 90, 91, 53};
    int target = 59;
    int length = sizeof(arr) / sizeof(int);
    if (linearSearch(arr, target, length))
    {
        cout << "Element Found"
             << "\n";
    }
    else
    {
        cout << "Element not found"
             << "\n";
    }
    return 0;
}