#include<bits/stdc++.h>
using namespace std;

class OrderArray
{
    int n,m;
    vector<int>arr1,arr2;
    set<int>set1;

    public:
    void SetValue(int n,int m,vector<int> arr1,vector<int> arr2)
    {
        this->n=n;
        this->m=m;
        this->arr1=arr1;
        this->arr2=arr2;

        Union();
    }

    void Union()
    {
        for(int i=0;i<n;i++)
        {
            set1.insert(arr1[i]);
        }

        for(int i=0;i<m;i++)
        {
            set1.insert(arr2[i]);
        }

        int arr[set1.size()];

        int i=0;

        for(int x:set1)
        {
            arr[i]=x;
            i++;
        }

        PrintValue(arr,set1.size());
    }

    void PrintValue(int arr[],int size)
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    int n;
    cin>>n;

    vector<int> arr1(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    int m;
    cin>>m;

    vector<int> arr2(m);
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    OrderArray A;
    A.SetValue(n,m,arr1,arr2);
}