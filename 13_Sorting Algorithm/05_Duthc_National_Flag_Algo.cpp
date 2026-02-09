// Dutch National Flag Algorithm for 0s, 1s and 2s, (single pass)
#include<iostream>
#include<vector>
using namespace std;
void sortArr(vector<int>&arr){   // O(n)
    int n = arr.size();
    int mid = 0, low = 0, high = n-1;
    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid]==1)
        {
            mid++;
        }
        else{   // arr[mid]==2
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    
}
int main(){
    vector<int>arr = {2,0,2,1,1,0,1,2,0,0};
    sortArr(arr);
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}