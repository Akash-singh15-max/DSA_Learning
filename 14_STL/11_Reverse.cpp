// Reversing an array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    reverse(vec.begin(),vec.end());
    for(auto val: vec){
        cout<<val<<" ";
    }
    cout<<endl;
    
    vector<int> arr = {1,2,3,4,5};
    reverse(arr.begin()+1, arr.begin()+3);
    for(auto val: arr){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}