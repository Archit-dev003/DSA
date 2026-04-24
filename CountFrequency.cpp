#include <bits/stdc++.h>
using namespace std;


void Frequency(int arr[], int n)
{
    unordered_map<int,int> map;

    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }  

    for(auto i : map)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main()
{
    int arr[]={2,3,2,6,8,6,9,9,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    //Number of elements = Total array size / Size of one element

    Frequency(arr,n);
}