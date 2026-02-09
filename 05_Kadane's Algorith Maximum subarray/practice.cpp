// Print maximum subarray sum
// Using kadane's algorithm

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int currSum = 0, maxSum = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum+=arr[i];
        if (currSum>maxSum)
        {
            maxSum = currSum;
        }
        if (currSum<0)
        {
            currSum = 0;
        }
        
    }
    cout<<"\nMaximum subarray sum is : "<<maxSum<<endl;
    
    

    return 0;
}