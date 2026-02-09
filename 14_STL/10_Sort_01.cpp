// Sorting
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[5] = {4,7,2,9,1};
    sort(arr,arr+5);    // sort in ascending order
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    vector<int>nums = {6,4,8,2,0};
    sort(nums.begin(),nums.end());  // sort in ascending order
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<endl;

    sort(nums.begin(),nums.end(),greater<int>());   // sort in descending order
    for(int val: nums){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}