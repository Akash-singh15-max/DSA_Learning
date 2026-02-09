#include<iostream>
#include<vector>
using namespace std;
int singleEleBinarySearch(vector<int>&arr){
    int n = arr.size();
    if (n == 1)
    {
        return arr[0];
    }
    int start = 0, end = n-1;
    while (start<=end)
    {
        int mid = start + (end-start)/2;
        if (mid==0 && arr[0]!=arr[1])
        {
            return arr[mid];
        }
        if (mid==n-1 && arr[n-1]!=arr[n-2])
        {
            return arr[mid];
        }
        if (arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1])
        {
            return arr[mid];
        }
        if (mid % 2 == 0)   // even elements both side of mid
        {
            if (arr[mid-1]==arr[mid])
            {
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{   // odd elements both side of mid
            if (arr[mid-1]==arr[mid])
            {
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    
}
int main(){
    vector<int>arr = {1,1,2,2,3,4,4,8,8};
    cout<<"The single element is: "<<singleEleBinarySearch(arr);
    

    return 0;
}