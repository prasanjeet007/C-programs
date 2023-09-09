#include <iostream>
using namespace std;
void evenOrOdd(int n)
{
    if (n & 1)
    {
        cout << "Number is odd" << endl;
    }
    else
    {
        cout << "Number is even" << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    evenOrOdd(n);
    return 0;
}