// Functions of string
#include<iostream>
using namespace std;

int main(){
    string str1 = "Akash";
    string str2 = "Kumar";

    cout<<str1.length()<<endl;  // length

    string str3 = str1 + str2;  // concatation
    cout<<str3<<endl;

    cout<<(str1==str2)<<endl;   // comparing str1 and str2
    return 0;
}