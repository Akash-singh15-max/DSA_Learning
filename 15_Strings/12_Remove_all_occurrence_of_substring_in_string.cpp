// Remove all occurrence of a given substring from a string
/*
    Given two strings s and part, perform the following operation on s 
    until all occurrences of the substring part are removed:

    Find the leftmost occurrence of the substring part and remove it from s.
    Return s after removing all occurrences of part.

    A substring is a contiguous sequence of characters in a string.
*/

#include<iostream>
using namespace std;

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    while (str.length()>0 && str.find(part)<str.length())
    {
        str.erase(str.find(part),part.length());
    }
    cout<<str<<endl;


    return 0;
}