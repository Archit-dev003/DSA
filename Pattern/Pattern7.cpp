#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a value;";
    cin>>n;
    
    for(int i=0; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        for (int j = 1; j < i; j++)
        {
            printf("*");
        }
        
        printf("\n");
        
    }
}