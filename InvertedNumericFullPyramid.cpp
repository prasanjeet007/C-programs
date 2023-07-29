#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number"
         << "\n";
    cin >> n;
    int num = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
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
}
