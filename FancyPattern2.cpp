#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << count << " ";
                count = count + 1;
            }
            else
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    int start = count;
    for (int row = 0; row < n; row++)
    {
        start = start - (n - row);
        int k = start;
        for (int col = 0; col < ((2 * n) - (2 * row)) - 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << k << " ";
                k++;
            }
            else
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}