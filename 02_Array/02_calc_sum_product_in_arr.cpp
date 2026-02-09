// Write a function to calculate the sum and product all numbers in array

#include<iostream>
using namespace std;
void sum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    cout<<"Sum of all numbers = "<<sum<<endl;
}
void product(int arr[], int size){
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    cout<<"Product of all numbers = "<<product<<endl;
}
int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    sum(arr,size);
    product(arr,size);


    return 0;
}