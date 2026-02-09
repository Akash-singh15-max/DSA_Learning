// Array of charactors
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
    char str[] = "hello";   // string literals 
    // char str[] = {'h','e','l','l','o','\0'};
    cout<<strlen(str)<<endl;
    cout<<str[1]<<endl;     // constant pointers
    cout<<str[5]<<endl;

    return 0;
}