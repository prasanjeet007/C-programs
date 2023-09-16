#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            for (int k = 0; k < 3; k++)
            {
                cout << arr[row] << ", " << arr[col] << ", " << arr[k] << "\n";
            }
        }
    }
    return 0;
}