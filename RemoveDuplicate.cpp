#include<bits/stdc++.h>
using namespace std;

void Duplicate(int arr[],int n)
{
    int arr2[10],count=0;

    for(int i = 0; i < n; i++)
    {
        if(i == n-1 || arr[i]!=arr[i+1])
        {
            arr2[count]=arr[i];
            count++;
        }
    }
    for(int i = 0;i < count; i++)
    {
        cout<<arr2[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    Duplicate(arr,n);
}