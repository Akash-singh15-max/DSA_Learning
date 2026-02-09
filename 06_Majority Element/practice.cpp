// Find majority element in an array using moore's vooting algorithm
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
    return ans;
}
int main(){
    vector<int>nums = {1,2,1,2,1,1,3,2,3,3,1,3,3,2,3,3};
    int n = nums.size();
    cout<<"\nMajority element : "<<majEle(nums)<<endl;

    return 0;
}