#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 0; row < 6; row++)
    {
        if (row == 0 || row == 5)
        {
            for (col = 0; col < 5; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (col = 0; col < 3; col++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << "\n";
    }
}