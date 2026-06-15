#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter range";
    cin>>a>>b;

    for(int i=a;i<=b;i++)
    {
        int n=i,digit,sum=0;

        while(n!=0)
        {
            digit=n%10;
            sum=sum+(digit*digit*digit);
            n=n/10;
        }
        if(sum==i)
        cout<<i<<" ";
    }
    return 0;
}