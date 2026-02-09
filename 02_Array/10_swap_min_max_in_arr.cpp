#include<iostream>
using namespace std;
void minmax(int arr[], int n){
    int minIdx = 0;
    int maxIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<arr[minIdx])
        {
            minIdx = i;
        }
        if (arr[i]>arr[maxIdx])
        {
            maxIdx = i;
        }
        
        
    }
    // swaping 
    int temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;
    
}
int main(){
    int arr[] = {4, 3, 2, 9, 0, 2, 11};
    int n = sizeof(arr)/sizeof(int);
    cout<<"Before swaping : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    minmax(arr,n);
    cout<<"After swaping : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    

    return 0;
}