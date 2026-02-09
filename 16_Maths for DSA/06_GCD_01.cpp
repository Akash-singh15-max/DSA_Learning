// GCD = Greatest Common Divisor
// GCD = HCF

// Brute force approach
#include<iostream>
using namespace std;

int main(){
    int n1 = 20, n2 = 28;
    int gcd = 1;
    if (n1==0)
    {
        return n2;
    }
    if (n2==0)
    {
        return n1;
    }
    if (n1==n2)
    {
        return n1;  // or return n2;
    }
    
    for (int i = 1; i <= min(n1,n2); i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            gcd = i;
        }
        
    }
    cout<<"GCD = "<<gcd<<endl;

    return 0;
}