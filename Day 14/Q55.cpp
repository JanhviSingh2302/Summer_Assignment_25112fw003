#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int lar=a[0],sec=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>lar)
        {
            sec=lar;
            lar=a[i];
        }
        else if(a[i]>sec && a[i]!=lar)
        {
            sec=a[i];
        } 
    }
    cout<<sec;
    return 0;

}