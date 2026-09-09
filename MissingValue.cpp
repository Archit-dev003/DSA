#include<bits/stdc++.h>
using namespace std;

class MissingValue
{
    vector<int> arr;
    int n;

    public:

    void SetValue(vector<int>arr,int n)
    {
        this->arr=arr;
        this->n=n;

        Finding();
    }

    void Finding()
    {
        int Temp,Diff;
        Temp=arr[0];

        Diff=min(arr[1]-arr[0],arr[n-1]-arr[n-2]);

        for(int i=0;i<n;i++)
        {
            bool Present=false;
            for(int j=0;j<n;j++)
            {
                if(Temp==arr[j])
                {
                    Present=true;
                    break;
                }
            }

            if(Present==false)
            {
                cout<<"The Missing Value is "<<Temp;
                break;
            }

            Temp+=Diff;
        }
    }
};

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    MissingValue M;
    M.SetValue(arr,n);
}
