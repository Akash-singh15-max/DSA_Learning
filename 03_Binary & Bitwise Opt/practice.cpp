// Decimal to binary operation
#include<iostream>
using namespace std;
int decToBin(int n){
    int ans = 0, pow = 1;
    while (n>0)
    {
        int rem = n%2;
        ans += rem*pow;
        n/=2;
        pow *= 10;
    }
    return ans;
}
int main(){
    int n = 10;
    cout<<decToBin(n)<<endl;

    return 0;
}