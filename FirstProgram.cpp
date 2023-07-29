#include <iostream>
using namespace std;
int main()
{
    int row, col;
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}