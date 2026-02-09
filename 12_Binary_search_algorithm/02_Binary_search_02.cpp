// Binary search for odd no. of elements in array
#include<iostream>
#include<vector>
using namespace std;
int binSearch(vector<int>arr, int target){
    int st = 0, end = arr.size()-1;
    while (st<=end)
    {
        int mid = (st+end)/2;
        if (target>arr[mid])
        {
            st = mid+1;
        }
        else if (target<arr[mid])
        {
            end = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {-1,0,3,5,9,12};
    int target = 0;
    cout<<binSearch(arr,target)<<endl;
    return 0;
}