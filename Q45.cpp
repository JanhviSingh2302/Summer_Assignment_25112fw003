#include<iostream>
using namespace std;
int palin(int n)
{
    int rev,x=n;
    while(n>0)
    rev=rev*10 + n%10;
    n=n/10;

    return(x==rev);
}
int main()
{
    int n;
cin>>n;
if(palin(n))
cout<<"Palindrome";
else
cout<<"Not Palindrome";
return 0;
}