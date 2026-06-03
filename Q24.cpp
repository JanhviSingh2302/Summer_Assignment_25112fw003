#include<iostream>
using namespace std;
int main()
{
    int n,p,x=1;
    cout<<"Enter the base and power";
    cin>>n>>p;
     for(int i=1;i<=p;i++)
     {
     x=x*n;
     }
     cout<<"Result="<<x;
     return 0;

}