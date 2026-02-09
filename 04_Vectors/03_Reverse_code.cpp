#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&vec){
    int n = vec.size();
    for (int i = 0; i < n/2; i++)
    {
        // swap element at i and (n-i-1)
        int temp = vec[i];
        vec[i] = vec[n-i-1];
        vec[n-i-1] = temp;
    }
    
}
int main(){
    vector<int>vec = {1,2,3,4,5};
    // displaying original vector
    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    reverse(vec);

    // displaying vector after reversing
    for(int value:vec){
        cout<<value<<" ";
    }
    cout<<endl;
    return 0;
}