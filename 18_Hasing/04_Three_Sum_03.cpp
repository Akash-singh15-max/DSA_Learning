// 3 Sum
// Two pointer approach
// T.c = O(nlogn + n^2)
// S.c = O(uniqueTriplet)

/*
    Given an integer array nums, return all the triplets 
    [nums[i], nums[j], nums[k]] such that i != j, i != k, 
    and j != k, and nums[i] + nums[j] + nums[k] == 0.

    Notice that the solution set must not contain duplicate triplets.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>threeSum(vector<int>&nums){
    int n = nums.size();
    vector<vector<int>>ans;
    sort(nums.begin(),nums.end());  // O(nlogn)
    for (int i = 0; i < n; i++)     // O(n)
    {
        if (i>0 && nums[i] == nums[i-1])
        {
            continue;
        }
        int j = i+1, k = n-1;
        while (j<k)     // O(n)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum>0)
            {
                k--;
            }
            else if (sum<0)
            {
                j++;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[k]});
                j++, k--;
                while (j<k && nums[j]==nums[j-1])
                {
                    j++;
                }
            
            }
            
            
        }
        
        
    }
    return ans;
}
int main(){
    vector<int>nums = {-1,0,1,2,-1,-4};
    vector<vector<int>>ans = threeSum(nums);
    for(const auto val: ans){
        for(int num : val){
            cout<<num<<" ";
        }
        cout<<endl;
    }

    return 0;
}