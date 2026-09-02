#include <bits/stdc++.h>
using namespace std;

void SortCheck(int n, int arr[])
{
    bool status = true;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < arr[i+1]);

        else
        {
            status = false;
            break;
        }
    }
    if(status == true)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is unsorted";
    }
}

int main()
{
int n;
 cin >> n;
 int arr[n];

 for(int i = 0; i < n; i++)
 {
    cin>>arr[i];
 }
 SortCheck(n,arr);
}