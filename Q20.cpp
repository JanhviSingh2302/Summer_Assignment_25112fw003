#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter a number";
    cin>>n;
    for(int i=n;i>=2;i--)
    {
        if(n%i==0)
        {
        count=0;
        
            for(int j=1;j<=i;j++)
            {
            if(i%j==0)
                count++;
            }
            if(count==2)
            {
            cout<<"Largest prime factor="<<i;
            break;
            }
        }
    }
    return 0;
}