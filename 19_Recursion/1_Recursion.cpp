// Recursion
// Print Nth term

#include<iostream>
using namespace std;

void printNums(int n){

    if (n==1)
    {
        cout<<"1";
        return;
    }
    cout<<n<<" ";
    printNums(n-1);

    
}

int main(){
    int n;
    cout<<"\nEnter the number of terms : ";
    cin>>n;

    printNums(n);

    return 0;
}