#include<iostream>
using namespace std;
 int main()
 {
    int n,m,count=0;
    int arr[10]={};
    cin>>n>>m;

    for(int i=2; i<=n && i<=m; i++)
    {
        if(n%i==0 && m%i==0)
        {
            arr[count]=i;
            count++;
        }
    }
  
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
 }