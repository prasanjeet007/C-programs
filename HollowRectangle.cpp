#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 0; row < 5; row++)
    {
        for (col = 0; col < 5; col++)
        {
            if (row == 0 || row == 4)
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == 4)
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
    return 0;
}