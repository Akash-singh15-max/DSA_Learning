// Program to print all prime number to Nth term
#include<iostream>
using namespace std;
bool isPrime(int n){
    if (n<2)
    {
        return false;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
    
    
}
int main(){
    int n1,n2;
    cout<<"Enter the starting number : ";
    cin>>n1;
    cout<<"Enter the last number : ";
    cin>>n2;
    cout<<"\nPrime numbers between "<<n1<<" and "<<n2<<" are : ";
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            cout<<i<<" ";
        }
        
    }
    

    return 0;
}