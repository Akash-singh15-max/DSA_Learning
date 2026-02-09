// Pass by reference using pointer
#include<iostream>
using namespace std;
void changeA(int *ptr){ // pass by reference using pointer
    *ptr = 20;
}
int main(){
    int a = 10;
    changeA(&a);
    cout<<"In main function, a = "<<a<<endl;

    return 0;
}