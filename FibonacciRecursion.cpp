#include <bits/stdc++.h>
using namespace std;

void Fibonacci(int count,int prev,int current,int n){
    if(count<=n)
    {
        if(count%2==0)
        {
            cout<<prev<<" ";
            prev+=current;
        }
        else if(count%2!=0)
        {
            cout<<current<<" ";
            current+=prev;
        }        
        count++;
        Fibonacci(count,prev,current,n);
    }
    else 
    return;
}

int main()
{
    int n,count;
    cin>>n;
    Fibonacci(0,0,1,n);
}