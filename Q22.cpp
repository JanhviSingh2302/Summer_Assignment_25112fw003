#include<iostream>
using namespace std;
int main()
{
    int n,decimal=0,rem,p=1;
    cout<<"Enter the number";
    cin>>n;
    while(n!=0)
    {
rem=n%10;
decimal=decimal+rem*p;
p=p*2;
n=n/10;
    }
    cout<<"Decimal="<<decimal;
    return 0;
}