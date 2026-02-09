// Prime number
#include<iostream>
using namespace std;
bool isPrime(int n){
    for (int i = 2; i < n-2; i++)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    if (isPrime(n))
    {
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" isn't a prime number."<<endl;
    }
    
    return 0;
}