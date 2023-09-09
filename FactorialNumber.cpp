#include <iostream>
using namespace std;
void factorialNumber(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    cout << "Fcatorial is " << fac << endl;
}
int main()
{
    int num;
    cin >> num;
    factorialNumber(num);
    return 0;
}