/*
    Triangle pattern 1
    *
    * *
    * * *
    * * * *
*/

/*
    Triangle pattern 2
    1
    2 2
    3 3 3
    4 4 4 4
*/

/*
    Triangle pattern 3
    A
    B B
    C C C
    D D D D
*/

/*
    Triangle pattern 4
    1
    1 2
    1 2 3
    1 2 3 4
*/

#include<iostream>
using namespace std;
int pattern1(int n);
int pattern2(int n);
int pattern3(int n);
int pattern4(int n);

int main(){
    int n = 4;
    pattern1(n);
    cout<<endl;
    pattern2(n);
    cout<<endl;
    pattern3(n);
    cout<<endl;
    pattern4(n);

    return 0;
}
int pattern1(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
int pattern2(int n){
    
    for (int i = 0; i < n; i++)
    {
        
        for (int j = 0; j < i+1 ; j++)
        {
            cout<<i+1<<" ";
            
        }
        cout<<endl;
    }
    
}

int pattern3(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}

int pattern4(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1 ; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}