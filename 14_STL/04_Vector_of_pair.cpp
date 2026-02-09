// Vector of pair
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<pair<int,int>>vec = {{1,2},{2,3},{3,4},{4,5}};
    for(pair<int,int> p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    vec.push_back({10,20});     // insert
    vec.emplace_back(10,20);    // in-place objects create
    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    

    return 0;
}