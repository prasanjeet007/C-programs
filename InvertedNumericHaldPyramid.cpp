#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number"
         << "\n";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << col + 1;
        }
        cout << "\n";
    }
    return 0;
}