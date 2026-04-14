// pass by value

// #include<iostream>
// using namespace std;

// void modify(int val){
//     val+=10;
// }

// int main(){
//     int x=5;
//     modify(x);
//     cout<<x<<endl;
//     return 0;
// }

//pass by reference

#include<iostream>
using namespace std;

void modify(int &val){
    val+=10;
}

int main(){
    
    int x=3;
    modify(x);
    cout<<x<<endl;
    return 0;
}