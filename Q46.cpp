#include<iostream>
using namespace std;
int armstrong(int n)
{
    int sum=0,x=n,digit;
    while(n>0)
    {
        digit=n%10;
        sum=sum + digit*digit*digit;
        n=n/10;
    }
    return(sum==x);
}
int main()
{
    int n;
    cin>>n;

    if(armstrong(n))
    cout<<"Armstrong";
    else
    cout<<"Not Armstrong";
    return 0;
    
}