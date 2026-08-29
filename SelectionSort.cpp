#include<bits/stdc++.h>
using namespace std;

void Selectionsort(int arr[],int n)
{
    for(int i = 0;i < n; i++)
    {
        int min = i;

        for(int j = i; j < n ; j++)
        {
            if(arr[j] < arr[min])
            min = j;
        }
        swap(arr[i],arr[min]);
    }
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
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
    Selectionsort(arr,n);
}