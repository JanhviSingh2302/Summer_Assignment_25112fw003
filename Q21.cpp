#include<iostream>
using namespace std;
int main()
{
    int n,rem,binary=0,p=1;
    cout<<"Enetr the number";
    cin>>n;
    while(n!=0)
    {
        rem=n%2;
        binary=binary+p*rem;
        p=p*10;
        n=n/2;
    }
    cout<<"Binar="<<binary;
    return 0;
}