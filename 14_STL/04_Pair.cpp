// Pair
#include<iostream>
using namespace std;

int main(){
    pair<int, int> p1 = {6,69};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    pair<char,int>p2 = {'a',0};
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    pair<int,pair<char,int>> p3 = {1,{'A',5}};
    cout<<p3.first<<endl;
    cout<<p3.second.first<<endl;
    cout<<p3.second.second<<endl;

    return 0;
}