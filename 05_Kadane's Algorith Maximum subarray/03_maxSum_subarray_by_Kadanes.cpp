// Print maximum subarray sum

// Using Kadane's Algorithm
#include<iostream>
using namespace std;

int main(){
    int arr[]={3,-4,5,4,-1,7,-8};       // max sum of 5,4,-1,7
    int n = sizeof(arr)/sizeof(int);
    int currSum = 0, maxSum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += arr[i];
        if (currSum>maxSum)
        {   
            maxSum = currSum;
        }
        if (currSum<0)
        {
            currSum = 0;
        }
        

    }
    cout<<"Maximum sum of subarray of an array = "<<maxSum<<endl;

    return 0;
}