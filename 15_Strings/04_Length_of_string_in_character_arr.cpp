// Length of string from a character array
#include<iostream>
using namespace std;

int main(){
    char str[] = "Akash kumar";
    int len = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        len++;
    }
    cout<<"Length of string = "<<len<<endl;
    for(char val: str){
        cout<<val<<" ";
    }
    cout<<endl;
    

    return 0;
}