#include<iostream>
using namespace std;

int main(){
    int a = 69;
    cout<<&a<<endl;

    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;

    // pointer to pointer
    int**ptr2 = &ptr;
    cout<<ptr2<<endl;

    // dereference operator(*):-
    // gives value at address
    cout<<*(&a)<<endl;
    cout<<**(ptr2)<<endl;
    return 0;
}