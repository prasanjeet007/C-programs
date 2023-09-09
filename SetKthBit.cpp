#include <iostream>
using namespace std;
int main()
{
    int num, k;
    cin >> num >> k;
    int mask = 1 << k;
    int ans = num | mask;
    cout << ans << endl;
    return 0;
}