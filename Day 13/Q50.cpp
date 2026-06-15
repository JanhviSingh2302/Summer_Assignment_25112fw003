#include<iostream>
using namespace std;
int main()
{
int n;
float sum=0;

cin>>n;
int a[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    sum+=a[i];
 }
 cout<<"Sum="<<sum<<endl;
 cout<<"Average="<<(sum/n);
 return 0;
}