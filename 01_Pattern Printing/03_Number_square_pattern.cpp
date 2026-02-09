/*
    Square pattern 1
    1 2 3 4
    1 2 3 4
    1 2 3 4 
    1 2 3 4
*/
/*
    Square pattern 2
    1 2 3
    4 5 6
    7 8 9
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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

int pattern2(int n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    
}
