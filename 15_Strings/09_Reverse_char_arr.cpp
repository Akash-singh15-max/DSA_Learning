// Reverse a character array
#include<iostream>
using namespace std;

int main(){
    char str[] = "Akash";
    int n = 5;
    int start = 0, end = n-1;
    while (start<end)
    {
        swap(str[start],str[end]);
        start++;
        end--;
    }
    cout<<str<<endl;

    return 0;
}