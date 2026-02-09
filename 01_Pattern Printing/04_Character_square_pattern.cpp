/*
    Square pattern 1 of character
    A B C
    A B C
    A B C
*/

/*
    Square pattern 2 of character
    A B C
    D E F
    G H I
*/
#include<iostream>
using namespace std;
int pattern1(int n);
int pattern2(int n);
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pattern1(n);
    cout<<endl;
    pattern2(n);
    
    return 0;
}

int pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}
int pattern2(int n){
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
}