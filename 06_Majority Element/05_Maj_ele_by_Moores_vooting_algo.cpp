// Find majority element in an array using Moore's voting algorithm

#include<iostream>
#include<vector>
using namespace std;

int majEle(vector<int>&nums){
    int freq = 0, ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (freq==0)
        {
            ans = nums[i];
        }
        else if (ans==nums[i])
        {
            freq++;
        }
        else{
            freq--;
        }
    }

    // if it is given that answer can not be exists
    // int count = 0;
    // for(int val: nums){
    //     if (val == ans)
    //     {
    //         count++;
    //     }
        
    // }
    // if (count>n/2)
    // {
    //     return ans;
    // }
    // else{
    //     return -1;
    // }
    return ans; 
    
}
int main(){
    vector<int>nums = {1,2,2,1,2,4,4,4,4};  
    int n = nums.size();
    int Result = majEle(nums);
    cout<<"Majority element: "<<Result<<endl;
    return 0;
}