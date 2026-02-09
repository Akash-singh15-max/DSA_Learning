/*
    Inverted Triangle Pattern 1
    1 1 1 1
      2 2 2
        3 3
          4
*/

/*
    Inverted Triangle Pattern 2
    A A A A
      B B B
        C C
          D
*/

#include<iostream>
using namespace std;
int pattern1(int n);
int pattern2(int n);
int main(){
    int n=4;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    pattern1(n);
    pattern2(n);

    return 0;
}
int pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        // for printing spaces
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        // for printing number
        for (int j = 0; j < n-i; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    
    
}
int pattern2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        char ch = 'A'+i;
        for (int j = 0; j < n-i; j++)
        {
            cout<<ch;
        }
        cout<<endl;
    }
    
}