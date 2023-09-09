#include <iostream>
using namespace std;
void setBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        int bit = n % 2;
        if (bit == 1)
            count++;
        n = n / 2;
    }
    cout << "Count is " << count << endl;
}
int main()
{
    int num;
    cin >> num;
    setBits(num);
    return 0;
}