// Bitwise operator
#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 8;
    cout<<(a&b)<<endl;  // Bitwise &
    cout<<(a|b)<<endl;  // Bitwise |
    cout<<(a^b)<<endl;  // Bitwise ^
    cout<<(a<<1)<<endl; // Bitwise <<
    cout<<(b>>1)<<endl; // Bitwise >>
    return 0;
}