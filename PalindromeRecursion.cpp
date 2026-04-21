#include <bits/stdc++.h>
using namespace std;

void Palindrome(int forward,int Backward,string val)
{
    if(val[forward]==val[Backward])
    {
        forward++;
        Backward--;
        if(forward==Backward)
        {
            cout<<"Is a Palindrome";
        }
        else{
        Palindrome(forward,Backward,val);
        }
    }
    
    else if(val[forward]!=val[Backward])
    {
        cout<<"Is not a Palindrome";
    }
}


int main()
{
    string val;
    cin>>val;
    int n=val.length();
    Palindrome(0,n-1,val);
}