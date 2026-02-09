// Binary Search
// return bool value
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>vec = {4,7,2,9,1,0};
    int target = 9;
    cout<<binary_search(vec.begin(),vec.end(),target)<<endl;
    

    return 0;
}