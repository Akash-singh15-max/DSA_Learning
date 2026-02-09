// Find duplicate
/*
    Given an array of integers nums containing n + 1 integers where each 
    integer is in the range [1, n] inclusive.

    There is only one repeated number in nums, return this repeated number.

    You must solve the problem without modifying the array nums and using 
    only constant extra space.
*/
// T.c = O(n)
// S.c = O(n)   due to extra set
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int findDuplicate(vector<int>&nums){
    unordered_set<int>s;
    for(int val: nums){
        if (s.find(val) != s.end())
        {
            return val;
        }
        s.insert(val);
    }
    return -1;
}
int main(){
    vector<int>nums = {1,3,4,2,2};
    int result = findDuplicate(nums);
    cout<<result<<endl;

    return 0;
}