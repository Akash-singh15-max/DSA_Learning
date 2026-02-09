/*
    Aggressive Cows Problem
    Assign C cows to N stalls such that minimum distance between them 
    is largest possible. Return largest minimum distance.

    N = 5, arr = {1,2,8,4,9}, C = 3
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int>&arr, int n, int c, int minAllowedDist){ // O(n)
    int cows = 1, lastStallPosition = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]-lastStallPosition>=minAllowedDist)
        {
            cows++;
            lastStallPosition = arr[i];
        }
        if (cows==c)
        {
            return true;  
        }
        
    }
    return false;
}
int getDistance(vector<int>&arr, int n, int c){ // O(nlogn)
    sort(arr.begin(), arr.end());
    int start = 1, end = arr[n-1]-arr[0];   // range
    int ans = -1;
    while (start<=end)  // O(log(range)*n)
    {
        int mid = start + (end-start)/2;
        if (isPossible(arr,n,c,mid))    // right
        {
            ans = mid;
            start = mid+1;
        }
        else{   // left
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,8,4,9};
    int n = 5, c = 3;
    cout<<"Largest minimum distance is: "<<getDistance(arr,n,c)<<endl;

    return 0;
}

