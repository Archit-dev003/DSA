#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[n];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the balue of arrays: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int hash[10]={0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    cout<<"Enter the size of array: ";
    int q;
    cin>>q;
    while(q>0)
    {
        int num;
        cin>>num;
        cout<<"The Value Occured "<<hash[num]<<" times"<<endl;
        q--;
    }   
}