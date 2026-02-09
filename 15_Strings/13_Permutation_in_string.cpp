// Permutation is string

#include<iostream>
using namespace std;
bool isFreqSame(int freq1[], int freq2[]){
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
        
    }
    return true;
}
bool checkInclusion(string s1, string s2){
    if (s1.length()>s2.length())
    {
        return false;
    }
    int freq[26] = {0}, windowFreq[26] = {0};
    int windowSize = s1.length();
    // count freq of characters in s1
    for(char c : s1){
        freq[c - 'a']++;
    }
    // first window of size s1 in s2
    for (int i = 0; i < windowSize; i++)
    {
        windowFreq[s2[i]-'a']++;
    }
    // check the first window
    if (isFreqSame(freq,windowFreq))
    {
        return true;
    }
    // slide the window across s2
    for (int i = windowSize; i < s2.length(); i++)
    {
        windowFreq[s2[i]-'a']++;    // include new character
        windowFreq[s2[i - windowSize] - 'a']--;     // remove old character
        if (isFreqSame(freq,windowFreq))
        {
            return true;
        }
        
    }
    return false;
    
    
    
}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    bool result = checkInclusion(s1,s2);
    cout<<result<<endl;
    return 0;
}