// Binary Search with recursive approach
#include<iostream>
#include<vector>
using namespace std;
int binSearch(vector<int>arr, int target, int start, int end){
    if (start<=end)
    {
        int mid = start+(end-start)/2;
        if (target>arr[mid]) // 2nd half
        {
            return binSearch(arr,target,mid+1,end);
        }
        else if (target<arr[mid]) // 1st half of array
        {
            return binSearch(arr,target,start,mid-1);
        }
        else{ // mid=> ans 
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={-1,0,3,5,9,12};
    int target = 3;
    int start = 0, end = arr.size()-1;
    cout<<binSearch(arr,target,start,end);

    return 0;
}