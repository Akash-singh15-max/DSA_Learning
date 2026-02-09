#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int>&arr){
    int n = arr.size();
    int pivot = -1;
    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i]<arr[i+1])
        {
            pivot = i;
            break;
        }
        
    }
    for (int i = n-1; i > pivot; i--)
    {
        if (arr[i]>arr[pivot])
        {
            swap(arr[i],arr[pivot]);
            break;

        }
        
    }
    int a = pivot+1;
    int b = n-1;
    while (a<=b)
    {
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
    
    
}
int main(){
    vector<int>arr = {1,2,3};
    cout<<"\nNext Permutation : "<<endl;
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    nextPermutation(arr);
    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}