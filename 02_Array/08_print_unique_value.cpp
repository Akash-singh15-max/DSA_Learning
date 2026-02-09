// Write a function to print all unique values in an array
#include<iostream>
using namespace std;

void unique(int arr[], int size){
    cout<<"Unique values:"<<endl;
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        
        // check if the current element appears elsewhere in the array
        for (int j = 0; j < size; j++)
        {
            if (i!=j && arr[i]==arr[j])
            {
                isUnique=false;
                break;
            }
            
        }
        if (isUnique)
        {
            cout<<arr[i]<<" ";
        }
        
    }
    cout<<endl;
}
int main(){
    int arr[]={3,2,5,2,4,5};
    int size = sizeof(arr)/sizeof(int);
    unique(arr,size);
    return 0;
}