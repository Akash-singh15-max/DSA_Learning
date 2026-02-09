/*
    Painter's Partition Problem

    Given are N boards of length of each given in the from of 
    array, and M painters, such that each painter takes one unit
    to paint one unit of board.
    The task is to find the 'minimum time' to paint all boards
    under the constraints that any painter will only paint 
    continous sections of boards.
*/
#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int>&arr, int n, int m, int maxTime){
    int painter = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>maxTime)
        {
            return false;
        }
        if (time+arr[i]<=maxTime)
        {
            time += arr[i];
        }
        else{
            painter++;
            time = arr[i];
        }
    }
    return painter>m? false:true;
}
int paintBoards(vector<int>&arr, int n, int m){
    if (m>n)
    {
        return false;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
    }
    int ans = -1;
    int start = 0, end = sum;   // range of possible answer
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if (isValid(arr,n,m,mid))   // left
        {
            ans = mid;
            end = mid-1;
        }
        else{   // right
            start = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr = {40, 30, 10, 20};
    int n = 4, m = 2;
    cout<<"Minimum time to paint all board is: "<<paintBoards(arr,n,m)<<endl;

    return 0;
}