#include <iostream>
using namespace std;
bool pairTripleSum(int arr[], int target)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (arr[row] + arr[col] + arr[k] == target)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int arr[] = {10, 20, 30};
    int target = 99;
    bool result = pairTripleSum(arr, target);
    if (result)
    {
        cout << "Found"
             << "\n";
    }
    else
    {
        cout << "Not Found"
             << "\n";
    }
    return 0;
}