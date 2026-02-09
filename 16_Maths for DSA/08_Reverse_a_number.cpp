// Reverse a number
#include<iostream>
using namespace std;
int reverseNumber(int n){
    int revNum = 0;
    while (n!=0)
    {
        int rem = n%10;
        revNum = (revNum*10)+rem;
        n = n/10;
    }
    return revNum;
}
int main(){
    int n = 12345;
    cout<<reverseNumber(n);

    return 0;
}