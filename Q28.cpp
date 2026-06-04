#include<iostream>
using namespace std;
int rev(int n)
{
    if(n==0)
    return 0;
    cout<<n%10;
    rev(n/10);
}
int main()
{
    int n;
    cin>>n;
    rev(n);
    return 0;
}