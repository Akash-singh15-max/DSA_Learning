// Sort Arrays with 0s, 1s and 2s.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr = {2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();
    
    // 1. Brute Force Approach (O(nlogn))
    sort(arr.begin(),arr.end());
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    // 2. Optimized Approach (O(n)), double pass
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            count0++;
        }
        else if (arr[i]==1)
        {
            count1++;
        }
        else{
            count2++;
        }
        int index = 0;
        for (int i = 0; i < count0; i++)
        {
            arr[index++] = 0;
        }
        for (int i = 0; i < count1; i++)
        {
            arr[index++] = 1;
        }
        for (int i = 0; i < count2; i++)
        {
            arr[index++] = 2;
        }
        
    }
    for(int val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}