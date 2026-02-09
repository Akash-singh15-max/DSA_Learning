// Merge two sorted Array
#include<iostream>
#include<vector>
using namespace std;
// Tc = O(n+m) and Sc = O(1)
void merge(vector<int>&arr1, int m, vector<int>&arr2, int n){
    int index = m+n-1;
    int i = m-1, j = n-1;
    while (i>=0 && j>=0)
    {
        if (arr1[i]>=arr2[j])
        {
            arr1[index] = arr1[i];
            index--;
            i--;
        }
        else{
            arr1[index] = arr2[j];
            index--;
            j--;
        }
                
    }
    while (j>=0)
    {
        arr1[index--] = arr2[j--]; 
    }
    
    
}
int main(){
    vector<int>arr1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int>arr2 = {2,5,6};
    int n = 3;
    merge(arr1,n,arr2,m);
    for (int val:arr1){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}