// Selection Sort algorithm
#include<iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)   // O(n^n)
    {
        int smallestIdx = i;    // unsorted part starting
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[smallestIdx])
            {
                smallestIdx = j;
            }
            
        }
        swap(arr[i],arr[smallestIdx]);
    }
    
}
int main(){
    int arr[]={4,1,5,2,3};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}