// Unordered map
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m.emplace("tv",100);
    m.emplace("fridge",50);
    m.emplace("laptop",80);
    m.emplace("phones",70);

    for(auto val: m){
        cout<<val.first<<" "<<val.second<<endl;
    }
    

    return 0;
}