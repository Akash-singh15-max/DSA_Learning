// Peak index in Mountain Array
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int peakIndexInMountainArray(vector<int>&nums){
        int n = nums.size();
        int start = 1, end = n-2;
        while (start<=end)
        {
            int mid = start + (end-start)/2;
            if (nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1])
            {
                return mid;
            }
            if (nums[mid-1]<nums[mid])  // right
            {
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    vector<int>nums = {0,3,8,9,5,2};
    cout<<"The peak index = "<<s.peakIndexInMountainArray(nums)<<endl;
    return 0;
}