#include <iostream>
using namespace std;
bool printPrimeOrNot(int num)
{
    bool isPrime = true;
    if (num == 1 || num == 2 || num == 3)
    {
        return isPrime;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return isPrime = false;
        }
    }
    return isPrime;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (printPrimeOrNot(i))
        {
            cout << i << " is a Prime"
                 << "\n";
        }
        else
        {
            cout << i << " is not a Prime"
                 << "\n";
        }
    }
    return 0;
}