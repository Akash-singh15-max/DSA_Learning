// Bubble sort algorithm
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)   // no. of iteration
    {   
        bool isSwap = false;
        for (int j = 0; j < n-i-1; j++) // no of comparesion
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
            
        }
        if (!isSwap)    // array is already sorted
        {
            return;
        }
        
    }

}
int main(){
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}