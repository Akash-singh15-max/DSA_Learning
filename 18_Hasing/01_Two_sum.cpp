// Two Sum
// Brute force approach

#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,2,11,7,15};
    int target = 9;
    int n = sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]+arr[j]==target)
            {
                cout<<i<<", "<<j<<endl;
            }
            
        }
        
    }
    

    return 0;
}