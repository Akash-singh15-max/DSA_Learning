// Swap min and max of an array
#include<iostream>
using namespace std;
void swaping(int arr[], int n){
    int minInd = 0;
    int maxInd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<minInd)
        {
            minInd = i;
        }
        if (arr[i]>maxInd)
        {
            maxInd = i;
        }
        
    }
    int temp = arr[minInd];
    arr[minInd] = arr[maxInd];
    arr[maxInd] = temp;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;
    swaping(arr,n);
    cout<<"After swaping : ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}