#include <iostream>
using namespace std;
void primeOrNotPrime(int n)
{
    if (n == 1 || n == 2 || n == 3)
    {
        cout << "Number is prime" << endl;
        return;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not prime" << endl;
            return;
        }
    }
    cout << "Number is prime" << endl;
}
int main()
{
    int num;
    cin >> num;
    primeOrNotPrime(num);
    return 0;
}