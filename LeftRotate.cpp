#include<bits/stdc++.h>
using namespace std;

class Rotate{
    int n, arr[];

    public:
    void SetValue(int n,int arr[])
    {
        this->n = n;
        
        for(int i = 0; i < n;i++)
        {
            this->arr[i] = arr[i];  
        }
    }

    void RotateValue()
    {
        int temp = arr[0];
        for(int i=1;i<n;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[n-1] = temp;
        
        PrintValue();
    }

    void PrintValue()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    int n;
    cin>>n;
    int arr[n];
    Rotate r;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    r.SetValue(n,arr);
    r.RotateValue();
}