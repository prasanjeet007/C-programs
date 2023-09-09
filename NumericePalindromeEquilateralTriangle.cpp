#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n = 0;
    for (int row = 0; row < num; row++)
    {
        n = n + 1;
        for (int col = 0; col < num - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        for (int col = n; col > 1;)
        {
            col = col - 1;
            cout << col;
        }
        cout << "\n";
    }
    return 0;
}