#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n";
    cin>>n;
     for(i=1;i<=n;i++)
     {
        char ch='A';
        for(j=1;j<i+1;j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
     }
     return 0;
}