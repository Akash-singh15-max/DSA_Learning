// Sets lower bound
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(4);

    cout<<"Lower bound = "<<*(s.lower_bound(3))<<endl;  // 3
    cout<<"Lower bound = "<<*(s.lower_bound(2))<<endl;  // 3
    cout<<"Lower bound = "<<*(s.lower_bound(5))<<endl;  // s.end()

    cout<<"Upper bound = "<<*(s.upper_bound(3))<<endl;  // greater than key

    for(auto val: s){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}