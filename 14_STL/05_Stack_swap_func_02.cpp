// swap function of stack
#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    stack<int>s2;
    s2.swap(s1);
    cout<<"S1 size = "<<s1.size()<<endl;    // 0
    cout<<"S2 size = "<<s2.size()<<endl;    // 3

    return 0;
}