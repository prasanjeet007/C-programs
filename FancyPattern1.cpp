#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * n - 2 - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int col = 0; col < 2 * n - 2 - row; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}