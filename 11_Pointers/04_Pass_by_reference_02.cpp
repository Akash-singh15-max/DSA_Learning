// Pass by reference using alias
#include<iostream>
using namespace std;
void changeA(int &b){   // here & is not indicate about address, instead it denotes alias
    b = 20;
}
int main(){
    int a = 10;
    changeA(a);
    cout<<"In main function, a = "<<a<<endl;

    return 0;
}