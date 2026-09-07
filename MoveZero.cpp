#include<bits/stdc++.h>
using namespace std;

class MoveZero
{
    int n,arr[];

    public:
    void SetValue(int n,int arr[])
    {
        this->n=n;

        for(int i=0;i<n;i++)
        {
            this->arr[i]=arr[i];
        }
        ShiftingZero();
    }

    void PrintValue()
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
    }

    void ShiftingZero()
    {
        int index=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[index]=arr[i];
                index ++;
            }
            
        }
        while (index<n)
            {
                arr[index]=0;
                index ++;
            }
            
        PrintValue();
    }

};

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    MoveZero M;
    M.SetValue(n,arr);
}