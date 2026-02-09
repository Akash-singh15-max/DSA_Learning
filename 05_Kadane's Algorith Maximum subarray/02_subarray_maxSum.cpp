// Print the maximum subarray sum

// Brute force approach
#include<iostream>
using namespace std;

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};       // max sum of 5,4,-1,7
    int n = sizeof(arr)/sizeof(int);
    int maxSum = INT8_MIN;

    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
        
    }
    cout<<"Max subarray sum = "<<maxSum<<endl;

    return 0;
}