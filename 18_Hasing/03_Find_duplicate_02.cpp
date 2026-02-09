/*
    Given an array of integers nums containing n + 1 integers where each 
    integer is in the range [1, n] inclusive.

    There is only one repeated number in nums, return this repeated number.

    You must solve the problem without modifying the array nums and using 
    only constant extra space.
*/
// T.c = O(n)
// S.c = O(1)   due to extra set

#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>&arr){
    int slow = arr[0], fast = arr[0];
    do
    {
        slow = arr[slow];       // +1
        fast = arr[arr[fast]];  // +2
    } while (slow != fast);
    slow = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];   // +1
        fast = arr[fast];   // +1
    }
    return slow;
    
    
}
int main(){
    vector<int> arr = {3,1,3,4,2};
    int result = findDuplicate(arr);
    cout<<result<<endl;

    return 0;
}