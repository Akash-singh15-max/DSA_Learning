// Euclid's Algorithm

// Find GCD
#include<iostream>
using namespace std;
int gcd(int a, int b){
    while (a>0 && b>0)
    {
        if (a>b)
        {
            a = a%b;
        }
        else{
            b = b%a;
        }
        
    }
    if (a==0)
    {
        return b;
    }
    else{
        return a;
    }
    
    
}
// GCD by recursion
int gcdRec(int a, int b){
    if (b==0)
    {
        return a;
    }
    else{
        return gcdRec(b,a%b);
    }
    
}
int lcm(int a, int b){
    int gcd = gcdRec(a,b);
    return (a*b)/gcd;
}
int main(){
    int n1 = 20, n2 = 28;
    cout<<"GCD = "<<gcd(n1,n2)<<endl;
    cout<<"GCD by Recursion = "<<gcdRec(n1,n2)<<endl;
    cout<<"LCM = "<<lcm(n1,n2)<<endl;
    return 0;
}