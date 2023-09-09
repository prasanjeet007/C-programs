#include <iostream>
using namespace std;
void numberUsingDigits(int n)
{
    int num=0;
    int digit;
    while(n>0){
    cin>>digit;
    num=num*10+digit;
    n--;
    }
     cout<<num<<endl;
}
int main()
{
    int num;
    cin >> num;
    numberUsingDigits(num);
    return 0;
}