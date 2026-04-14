#include<iostream>
using namespace std;

int main()
{   // square
    // int n;
    // cout<<"Enter a value;";
    // cin>>n;

    // for(int i=0; i<n; i++)
    // {
    //     for(int j=0; j<5; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    //right pyramid
    // int n;
    // cout<<"Enter a value;";
    // cin>>n;

    // for(int i=1; i<=n; i++)
    // {   
    //     for(int j=1; j<=i; j++)
    //     cout<<"*";

    //     printf("\n");
    // }


    //right pyramid with num
    //int n;
    // cout<<"Enter a value;";
    // cin>>n;

    // for(int i=1; i<=n; i++)
    // {   
    //     for(int j=1; j<=i; j++)
    //     cout<<j;

    //     printf("\n");
    // }


//     int n;
//     cout<<"Enter a value;";
//     cin>>n;
//     int count=1;
//     for(int i=1; i<=n; i++)
//     {  
//         for(int j=1; j<=i; j++)
//         cout<<count;

//         printf("\n");
//         count++;
//     }


// reverse 
    // int n;
    // cout<<"Enter a value;";
    // cin>>n;

    // for(int i=n; i>=0; i--)
    // {
    //     for(int j=0; j<i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    // int n;
    // cout<<"Enter a value;";
    // cin>>n;

    // for(int i=n; i>=0; i--)
    // {
    //     for(int j=1; j<=i; j++)
    //     cout<<j;

    //     printf("\n");
    // }

    // int n;
    // cout<<"Enter a value;";
    // cin>>n;
    
    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=i; j<n; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=1;k<=i;k++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = 1; j < i; j++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");
        
    // }

    // int n;
    // cout<<"Enter a value;";
    // cin>>n;
    
    // for(int i=0; i<=n; i++)
    // {
    //     for(int k=1;k<=i;k++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=i; j<n; j++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = i-1; j < n; j++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");
        
    // }


    // int n;
    // cout<<"Enter a value;";
    // cin>>n;
    
    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=i; j<n; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int k=1;k<=i;k++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");
        
    // }
    // for(int i=0; i<=n; i++)
    // {
    //     for(int k=1;k<=i;k++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=i; j<n; j++)
    //     {
    //         printf("*");
    //     }
    //     for (int j = i-1; j < n; j++)
    //     {
    //         printf("*");
    //     }
        
    //     printf("\n");
        

    // int n;
    // cout<<"Enter a value;";
    // cin>>n;

    // for(int i=1; i<=n; i++)
    // {   
    //     for(int j=1; j<=i; j++)
    //     if(i%2==0)
    //     {
    //     if(j%2==0)
    //     printf("1");
        
    //     else
    //     printf("0");
    //     }
    //     else
    //     {
    //         if(i%2!=0)
    //      {
    //      if(j%2==0)
    //      printf("0");
        
    //      else
    //      printf("1");
    //      }
    //     }

    //     printf("\n");
    // }

    int n;
    cout<<"Enter a value;";
    cin>>n;
    int count=1;
    for(int i=n;i>0;i--)
    {
        string star(count,'*');
        string space(n-1,' ');
        cout<<space<<star<<endl;
        n--;
       count+=2;
    }
}