#include <bits/stdc++.h>
using namespace std;

void MaxValue(int n,int arr[])
{
    int max=arr[0],max2 = arr[1];

    for(int i = 0;i < n;i++)
    {
        if(arr[i] > max)
        {
            max2 = max;
            max = arr[i];
        }
    }
    cout<<"Second largest value:"<<max2<<"\n";
}

void MinValue(int n,int arr[])
{
    int min=arr[0],min2=arr[1];

    for(int i = 1;i < n;i++)
    {
        if(arr[i] < min)
        {
            min2 = min;
            min = arr[i];
        }
    }
    cout<<"Second smallest value:"<<min2;
}

int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 MaxValue(n,arr);
 MinValue(n,arr);
}