// Check if a alphanumeric string is palindrome or not
#include<iostream>
using namespace std;
bool isAlphaNum(char ch){
    if ((ch>='0' && ch<='9') ||
        (tolower(ch)>='a' && tolower(ch)<='z'))
    {
        return true;
    }
    return false;
}
bool isPalindrome(string s){
    int start = 0, end = s.length()-1;
    while (start<end)
    {
        if (!isAlphaNum(s[start]))
        {
            start++;
            continue;
        }
        if (!isAlphaNum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        else{
            start++;
            end--;
        }
        
    }
    return true;
}
int main(){
    string s = "Ac3?e3c&a";
    if (isPalindrome(s))
    {
        cout<<s<<" is palindrome."<<endl;
    }
    else{
        cout<<s<<" isn't palindrome."<<endl;
    }
    

    return 0;
}