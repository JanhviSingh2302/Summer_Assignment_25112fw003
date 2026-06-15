#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n";
    cin>>n;
    int num=1;
     for(i=1;i<=n;i++)
     {
        
        for(j=1;j<i+1;j++)
        {
            cout<<num;
            
        }
        num++;
        cout<<endl;
     }
     return 0;
}