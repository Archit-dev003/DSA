#include <bits/stdc++.h>
using namespace std;

void Reverse(int current, int n, int arr[])
{
    if(n>current)
    {
        cout<<arr[n]<<" ";
        n--;
        Reverse(current,n,arr);
    }
    else if(n==current)
    {
        cout<<arr[current];
        n--;
    }
}

int main(){

     int n,arr[10]={};
     cin>>n;
     for(int i = 0; i < n; i++)
     {
        cin>>arr[i];
     }
     
     Reverse(0,n-1,arr);
}