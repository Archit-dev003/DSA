#include <bits/stdc++.h>
using namespace std;

int Value(int n,int current)
{
    if(n>=current)
    {
       cout<<current<<" ";
       return Value(n,current+1);
    }

    else
    return 0;
}

int main()
{int inp;

    cin>>inp;
    Value(inp,1);
    return 0;
}