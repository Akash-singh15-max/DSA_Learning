// Reversing a string
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str = "Akash kumar.";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}