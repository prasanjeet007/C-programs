#include <iostream>
using namespace std;
int main()
{
    int arr[] = {21, 3, 21, 5, 6, 7, 7, 6, 5, 19, 17, 19, 17};
    int unique = 0;
    for (int inx = 0; inx < 13; inx++)
    {
        unique = unique ^ arr[inx];
    }
    cout << "Unique Element in an array " << unique << endl;
    return 0;
}