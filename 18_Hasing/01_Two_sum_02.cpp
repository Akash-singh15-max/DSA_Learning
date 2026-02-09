// Two sum
// Two pointer approach

#include<iostream>
#include<algorithm>
using namespace std;
void twoSum(int arr[],int target, int n){
    sort(arr,arr+n);
    int start = 0, end = n-1;
    while (start<end)
    {
        if (arr[start]+arr[end]==target)
        {
            cout<<start<<","<<end<<endl;
            return;
        }
        else if (arr[start]+arr[end]>target)
        {
            end--;
        }
        else{
            start++;
        }
        
        
    }
    cout<<"No valid pair"<<endl;
}
int main(){
    int arr[] = {5,2,11,7,15};
    int target = 7;
    int n = sizeof(arr)/sizeof(int);
    twoSum(arr,target,n);

    return 0;
}