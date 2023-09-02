#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == num - 1)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == row)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }
}
