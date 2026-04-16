#include<iostream>
using namespace std;

int main(){
    int n,val,Rev=0;
    cin>>n;

    while(n>0)
    {
        val=n%10;
        Rev=Rev*10+val;
        n=n/10;
    }
    cout<<Rev;
}