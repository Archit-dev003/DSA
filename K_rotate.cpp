#include<bits/stdc++.h>
using namespace std;

class Rotate
{
    int n, k; 
    int Rotation;
    vector<int> arr;

    public:
    Rotate(int n, int arr[],int k,int Rotation){
        this->n=n;
        this->arr.resize(n);
        for(int i=0;i<n;i++)
        {
            this->arr[i]=arr[i];
        }
        this->k=k;
        this->Rotation=Rotation;
    }

    void RotateValueLeft()
    {
        for(int i=1;i<=k;i++)
        {
            int temp=arr[0];
            for(int j=1;j<n;j++)
            {
                arr[j-1]=arr[j];
            }
            arr[n-1]=temp;
        }
        PrintValue();
    }

    void RotateValueRight()
    {
        for(int i=1;i<=k;i++)
        {
            int temp =arr[n-1];
            for(int j=n-1;j>0;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[0]=temp;
        }
        PrintValue();
    }

    void LeftorRight()
    {
        if(Rotation==1)
        {
            RotateValueLeft();
        }
        else if(Rotation==2)
        {
            RotateValueRight();
        }
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
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"How many rotation?: ";
    cin>>k;

    int Rotation;
    cout<<"Left(1) or Right?(2): ";
    cin>>Rotation;

    Rotate R(n,arr,k,Rotation);
    R.LeftorRight();
}