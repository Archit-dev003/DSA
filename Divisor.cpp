#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,arr[10]={};
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            arr[count]=i;
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
}