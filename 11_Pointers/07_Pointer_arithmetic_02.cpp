// 2. Add or subtract number
#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    ptr = ptr + 2;  // 2 int => 8 byte
    cout<<ptr<<endl;

    // This is usefull in array
    int arr[]={1,2,3,4,5};
    cout<<*arr<<endl;       // 1
    cout<<*(arr+1)<<endl;   // 2
    cout<<*(arr+2)<<endl;   // 2
    cout<<*(arr+3)<<endl;   // 2
    cout<<*(arr+4)<<endl;   // 2
    return 0;
}