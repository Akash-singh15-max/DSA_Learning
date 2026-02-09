// Subarray sum equals k
// Find total number of subarray whose sum is equal to target
// Brute force approach
// T.c = O(n^2)
// S.c = O(1)

#include<iostream>
#include<vector>
using namespace std;
int subarraySum(vector<int>&arr, int target){
    int count = 0;
    for (int i = 0; i < arr.size(); i++)        // starting point
    {
        int sum = 0;
        for (int j = i; j < arr.size(); j++)    // ending point
        {
            sum += arr[j];
            if (sum==target)
            {
                count++;
            }
            
        }
        
    }
    return count;
}
int main(){
    vector<int>arr={9,4,20,3,10,5};
    int target = 33;
    cout<<subarraySum(arr,target)<<endl;

    return 0;
}