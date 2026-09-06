#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a value;";
    cin>>n;
    
    for(int i=0; i<=n; i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(int j=i; j<n; j++)
        {
            printf("*");
        }
        for (int j = i-1; j < n; j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
}