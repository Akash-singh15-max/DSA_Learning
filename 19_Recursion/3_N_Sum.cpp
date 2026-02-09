// Sum of N nums

#include<iostream>
using namespace std;

int sumNum(int n){
    if (n==1)
    {
        return 1;
    }
    
    return n+sumNum(n-1);
}

int main(){
    int n;
    cout<<"\nEnter the number of terms : " ;
    cin>>n;

    cout<<sumNum(n);

    return 0;
}