/*
    Given an integer array nums, return an array answer such that 
    answer[i] is equal to the product of all the elements of nums 
    except nums[i].
    The product of any prefix or suffix of nums is guaranteed to fit 
    in a 32-bit integer.
    You must write an algorithm that runs in O(n) time and without 
    using the division operation.
*/
// Brute force approach
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        vector<int> productExceptSelf(vector<int>&nums){
            int n = nums.size();
            vector<int> ans(n,1);
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i!=j)
                    {
                        ans[i]*=nums[j];
                    }
                    
                }
            }
            return ans;
            
        }
        
};
int main(){
    Solution s;
    vector<int>nums = {1,2,3,4};
    vector<int>ans = s.productExceptSelf(nums);
    cout << "Product of array except self: ";
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}