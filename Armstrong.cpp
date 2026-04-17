#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,digit,sum=0;
    cin>>n;
    int val=n;
    while(val>0)
    {
        digit = val%10;
        sum=sum+pow(digit,3);
        val=val/10;
    }
    if(sum==n){
        cout<< n <<" is an Armstrong number." << endl;
    }
    else{
    cout << n << " is not an Armstrong number." << endl;}
}