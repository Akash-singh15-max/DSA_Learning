// Count sets bit
// 1. __builtin_popcount()
// 2. __builtin_popcountl()
// 3. __builtin_popcountll()

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n1 = 15;
    long int n2 = 15;
    long long int n3 = 15;
    cout<<__builtin_popcount(n1)<<endl;  // gives 1s in binary of number
    cout<<__builtin_popcountl(n2)<<endl;
    cout<<__builtin_popcountll(n3)<<endl;
    return 0;
}