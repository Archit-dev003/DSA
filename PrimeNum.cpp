#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,Prime=false;
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0){
           cout<<"Is not a Prime Number";
           Prime=true;
           break;
        }
    }
    if(Prime==false)
    {
        cout<<"Is a Prime Number";
    }
}
