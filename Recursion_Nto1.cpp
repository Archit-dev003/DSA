#include <bits/stdc++.h>
using namespace std;

int Value(int n)
{
    if(n>0)
    {
       cout<<n<<" ";
       return Value(n-1);
    }

    else
    return 0;
}

int main()
{int inp;

    cin>>inp;
    Value(inp);
    return 0;
}