// Write a function to print intersection of 2 array
#include<iostream>
using namespace std;

int main(){
    int arr1[]={1,2,4,6};
    int arr2[]={1,4,5,9};
    int size1 = 4, size2 = 4;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
            
        }
        
    }
    cout<<endl;

    return 0;
}