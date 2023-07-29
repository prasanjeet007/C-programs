#include <iostream>
using namespace std;
int main()
{
    int row, col, n;
    cout << "Enter a number"
         << "\n";
    cin >> n;
    for (row = 0; row < n; row++)
    {
        for (col = 0; col < n; col++)
        {
            if (n - row - 1 <= col)
            {
                cout << "* ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}