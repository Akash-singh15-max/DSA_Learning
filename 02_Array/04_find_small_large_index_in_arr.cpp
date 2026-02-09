// Find the smallest and largest index in an array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int arr[]={4,3,6,69,8,2,9};
    int n = sizeof(arr)/sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_index = -1;
    int largest_index = -2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
        if (arr[i]>largest)
        {
            largest = arr[i];
            largest_index = i;
        }
        
                
    }
    cout<<"Smallest index = "<<smallest_index<<endl;
    cout<<"Largest index = "<<largest_index<<endl;



    return 0;
}