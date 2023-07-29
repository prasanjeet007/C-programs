#include <iostream>
using namespace std;
int main()
{
    int row, col;
    int val = 4;
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < val; col++)
        {
            cout << "*";
        }
        val--;
        cout << "\n";
    }
}