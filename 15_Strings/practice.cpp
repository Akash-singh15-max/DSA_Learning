// Reverse word in a string
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

string reverse_string(string s){
    int n = s.length();
    string ans = "";
    reverse(s.begin(),s.end());
    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i<n && s[i]!=' ')
        {
            word += s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if (word.length()>0)
        {
            ans += " "+word;
        }
        
    }
    return ans.substr(1);
}

int main(){
    string s = "Akash kumar";
    cout<<"\nOriginal string : "<<s<<endl;
    string result = reverse_string(s);
    cout<<"Reversed string : "<<result<<endl;

    return 0;
}