#include<iostream>
using namespace std;
int main()
{
    int n,digit,sum=0,fact=1;
    cout<<"Enter the number";
    cin>>n;
     int ori=n;
     while(n>0)
     {
        digit=n%10;
        fact=1;
     for(int i=1;i<=digit;i++)
     {
 fact=fact*i;
     }
    sum=sum+fact;
     
    n=n/10;
     }
     if(sum==ori)
     {
        cout<<"Entered number is a strong number";

     }
     else
     {
        cout<<"Entered number is not a strong number";
     }
     return 0;


}