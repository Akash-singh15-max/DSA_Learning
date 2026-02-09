// Print input character array
#include<iostream>
using namespace std;

int main(){
    char str[11];   // last character will null character
    cout<<"Input character array : ";
    cin.getline(str,11);
    for(char ch: str){
        cout<<ch<<" ";
    }
    cout<<endl;

    return 0;
}