#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
    cout<<"Enter a value;";
    cin>>n;

    for(int i=1; i<=n; i++)
    {   
        for(int j=1; j<=i; j++)
        if(i%2==0)
        {
        if(j%2==0)
        printf("1");
        
        else
        printf("0");
        }
        else
        {
            if(i%2!=0)
         {
         if(j%2==0)
         printf("0");
        
         else
         printf("1");
         }
        }

        printf("\n");
    }
}