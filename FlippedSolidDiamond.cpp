#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    num = num / 2;
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num - row; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < row + row + 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < num - row; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        for (int col = 0; col < ((num * 2) - (row + row + 1)); col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    // for (int row = 0; row < num; row++)
    // {
    //     for (int col = 0; col < row + row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "\n";
    // }
    // for (int row = 0; row < num; row++)
    // {

    //     cout << "\n";
    // }
    return 0;
}