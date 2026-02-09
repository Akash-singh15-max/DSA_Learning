// find the smallest and largest in an array
#include<iostream>
using namespace std;

int main(){
    int arr[5] = {3, -7, 8, 2, 5};
    int size = 5;
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }

        largest = max(arr[i],largest);
        
    }
    cout<<"Smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;

    return 0;
}