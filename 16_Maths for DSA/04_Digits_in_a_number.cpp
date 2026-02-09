// Digits in a number
#include<iostream>
using namespace std;
void printDigits(int n){
    while (n!=0)
    {
        int digit = n%10;
        cout<<digit<<" ";
        n = n/10;
    }
    cout<<endl;
}
void countDigits(int n){
    int count = 0;
    while (n!=0)
    {
        int digit = n%10;
        count++;
        n = n/10;
    }
    cout<<count<<endl;
}
void sumDigits(int n){
    int sum = 0;
    while (n!=0)
    {
        int digits = n%10;
        sum += digits;
        n = n/10;

    }
    cout<<sum<<endl;
}
int main(){
    int n = 3568;
    printDigits(n);
    countDigits(n);
    // Here is a shortcut to count the digits of a number
    // cout<<(int)(log10(n)+1)<<endl;
    sumDigits(n);
    return 0;
}