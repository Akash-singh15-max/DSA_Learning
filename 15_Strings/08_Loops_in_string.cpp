#include<iostream>
using namespace std;

int main(){
    string str = "Akash kumar.";
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i]<<" ";
    }
    cout<<endl;

    for(char val: str){
        cout<<val<<" ";
    }
    cout<<endl;
    

    return 0;
}