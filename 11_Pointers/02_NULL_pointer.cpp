#include<iostream>
using namespace std;

int main(){
    // int *ptr;
    // cout<<ptr<<endl;  // gives random value

    int *ptr = NULL;
    cout<<ptr<<endl;

    // // we can't dereference a null pointer
    // int **ptr = NULL;
    // cout<<*ptr<<endl;   // gives error
    return 0;
}