/*
    Floyd's Triangle pattern 1
    1
    2 3
    4 5 6
    7 8 9 10
*/

/*
    Floyd's Triangle pattern 2
    A
    B C
    D E F 
    G H I J
*/

#include<iostream>
using namespace std;
int input1(int n);
int input2(int n);

int main(){
    int n = 4;
    input1(n);
    cout<<endl;
    input2(n);

    return 0;
}
int input1(int n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
}
int input2(int n){
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j > 0; j--) // backward loop
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    
}