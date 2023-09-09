#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int revInt = 0;
    while (num != 0)
    {
        int rem = num % 10;
        revInt = revInt * 10 + rem;
        num = num / 10;
    }
    cout << "Reverse Integer is " << revInt << "\n";
    return 0;
}