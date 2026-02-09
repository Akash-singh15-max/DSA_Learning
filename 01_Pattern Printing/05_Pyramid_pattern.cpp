/*
    Pyramid patern 1
       1
      121  
     12321
    1234321
*/ 

/*
    Pyramid pattern 2
       A
      ABA
     ABCBA
    ABCDCBA
*/

/*
    Pyramid pattern 3
       *
      ***
     *****
    *******
*/
#include<iostream>
using namespace std;
int pattern1(int n);
int pattern2(int n);
int pattern3(int n);
int main(){
    int n = 4;
    pattern1(n);
    cout<<endl;

    pattern2(n);
    cout<<endl;

    pattern3(n);
    cout<<endl;

    return 0;
}
int pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
            
        }
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
    
    
}
int pattern2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        char ch = 'A';
        for (int j = 1; j <= i+1; j++)
        {
            cout<<ch;
            ch++;
        }
        ch-=2;
        for (int j = 0; j < i; j++)
        {
            cout<<ch--;
            
        }
        cout<<endl;
    }
    
}

int pattern3(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        for (int j = i; j >= 1; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}