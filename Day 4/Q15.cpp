#include<iostream>
using namespace std;
int main()
{
    int n,digit,sum=0;
    cout<<"Enter the number";
    cin>>n;
   int ori=n;

    while(n!=0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(sum==ori)
    {
        cout<<"Entered number is a armstrong number";
    }
    else{
        cout<<"Entered number is not a armstrong number";
    }
    return 0;
}