#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the number";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

    }
    if(sum==n)
    {
        cout<<"Entered  number is a perfect number";
    }
    else
    {
        cout<<"Entered nuber is not a perfect number";
    }
    return 0;
}