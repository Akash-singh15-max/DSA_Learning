// LCM
#include<iostream>
using namespace std;
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
    cout<<"LCM = "<<lcm(n1,n2)<<endl;

    return 0;
}