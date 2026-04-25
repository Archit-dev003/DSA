#include<bits/stdc++.h>
using namespace std;

void Searching(int arr[],int n)
{ 
    unordered_map<int, int> map;

    for(int i = 0; i < n;i++)
    {
        map[arr[i]]++;
    }

    int maxEle=0,maxcount=0;
    int minEle = 0,mincount = n;

    for(auto num: map)
    {
        int element = num.first;
        int count = num.second;

        if(count>maxcount)
        {
            maxcount = count;
            maxEle = element;
        }

        if (count < mincount)
        {
            mincount = count;
            minEle = element;
        }
        
    }
    cout<<"The minimum occured value is "<<minEle<<endl;
    cout<<"The maximum occured value is "<<maxEle<<endl;
};

int main(){

    int n;
    cin>>n;

    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    Searching(arr,n);
}