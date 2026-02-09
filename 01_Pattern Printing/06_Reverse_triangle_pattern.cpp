/*
    Reverse Triangle pattern 1
    1
    2 1
    3 2 1
    4 3 2 1
*/

/*
    Reverse Triangle pattern 2
    A
    B A
    C B A
    D C B A
*/

#include<iostream>
using namespace std;
int pattern1(int n);
int pattern2(int n);

int main(){
    int n = 4;
    pattern1(n);
    cout<<endl;
    pattern2(n);

    return 0;
}
int pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}
int pattern2(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A'+i;
        for (int j = 0; j <= i ; j++)
        {
            cout<<ch--<<" ";
        }
        cout<<endl;
    }
    
}