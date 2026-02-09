#include<iostream>
using namespace std;

int main(){
    int marks[5] = {99, 89, 70, 95, 80};
    int sz = sizeof(marks)/sizeof(int);
    cout<<sz<<endl;
    for (int i = 0; i < sz; i++)
    {
        cout<<marks[i]<<endl;
    }
    return 0;
}