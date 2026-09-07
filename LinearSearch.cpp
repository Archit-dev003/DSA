#include<bits/stdc++.h>
using namespace std;

class LinearSearch
{
    int n,targrt;
    vector<int>arr;

    public:
    void SetValue(int n,int target,vector<int> arr)
    {
        this->n=n;
        this->targrt=target;
        this->arr=arr;
    }

    void Search(bool Find=false)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==targrt)
            {
                Find=true;
                cout<<"The value is at "<<i<<" index";
            }
        }
        if(Find==false)
        {
            cout<<"Invalid Value";
        }
    }
};

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter value: ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int Value;
    cout<<"Target Value: ";
    cin>>Value;

    LinearSearch L;
    L.SetValue(n,Value,arr);
    L.Search();
}