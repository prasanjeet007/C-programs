#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number"
         << "\n";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row <= col)
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