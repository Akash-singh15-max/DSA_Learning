// Pointer Arithmetic
// 1. Increment or decrement operator
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    ptr++;
    cout<<ptr<<endl;    // +4 byte increment in address
    ptr--;
    cout<<ptr<<endl;    // -4 byte decrement in address

    return 0;
}