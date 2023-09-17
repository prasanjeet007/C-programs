#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{23, 30, 12},
                     {90, 88, 61},
                     {87, 54, 32}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
