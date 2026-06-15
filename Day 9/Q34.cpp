#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of rows";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        int num=1;
        for(j=n;j>=i;j--)
        {
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}