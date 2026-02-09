// Find majority element by using brute force approach
#include<iostream>
#include<vector>
using namespace std;

int majEle(vector<int>& nums) {
    int n = nums.size();
    
    for (int val : nums) {
        int freq = 0;  // frequency counter
        
        for (int ele : nums) {
            if (ele == val) {
                freq++;
            }
        }

        // Check if frequency is greater than n/2;
        if (freq > n / 2) {
            return val;
        }
    }

    // No majority element found
    throw runtime_error("No majority element in the array");
}
int main(){
    vector<int>nums = {1,2,2,2,1,};
    int n = nums.size();
    int result = majEle(nums);
    cout<<result<<endl;
    return 0;
}