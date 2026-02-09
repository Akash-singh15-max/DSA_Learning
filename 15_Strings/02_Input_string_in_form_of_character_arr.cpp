// Input string in the form of character array
#include<iostream>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter char array : ";
    cin.getline(str,100);
    cout<<"Output : "<<str<<endl;

    cout<<"Enter char array with limiter : ";
    cin.getline(str,100,'$');   // limiter
    cout<<"Output : "<<str<<endl;


    return 0;
}