#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n = n / 2;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < ((2 * n) - 2 * (row + 1)); col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int row = 0; row < n - 1; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < (2 + (2 * row)); col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}