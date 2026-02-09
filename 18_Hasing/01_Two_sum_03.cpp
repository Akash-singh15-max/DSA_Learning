// Two sum
// Optimized approach
// O(n) - T.c
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int>&arr, int target){
    unordered_map<int,int> m;
    vector<int>ans;
    for (int i = 0; i < arr.size(); i++)    // O(n)
    {
        int first = arr[i];
        int second = target - first;
        if (m.find(second) != m.end())  // O(1)     // find operator gives two option - 1. true & 2. e.end()
        {
            ans.push_back(m[second]);
            ans.push_back(i);
            break;
        }
        m[first] = i;
    }
    return ans;
}
int main(){
    vector<int>arr = {5,2,11,7,15};
    int target = 9;
    vector<int>ans = twoSum(arr,target);
    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}