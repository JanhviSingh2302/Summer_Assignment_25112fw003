#include<iostream>
using namespace std;
int main()
{
    int n,digit,pro = 1;
    cout<<"Enter a number";
    cin>>n;
    while(n!=0)
    {
        digit=n%10;
        pro=pro*digit;
        n=n/10;
    }
    cout<<"Product of digits ="<<pro;
    return 0;
}