#include<iostream>
using namespace std;
int main()
{
    int n,digit,ori,rev=0;
    cout<<"Enter a number";
    cin>>n;
    ori=n;


    while(n!=0)
    {
        digit=n%10;
        rev=rev*10 + digit;
        n=n/10;
    }
    if(rev==ori)
    {
        cout<<"Entered number is palindrome";
    }
    else
    {
        cout<<"Entered number is not palindrome";
    }
    return 0;
}