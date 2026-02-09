// syntax checking
#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>vec; // size = 0
    // cout<<vec[0]<<endl;

    vector<int>aka={1,2,3}; // size = 3
    cout<<aka[0]<<endl;

    vector<int>aku(3,0);
    cout<<aku[0]<<endl;
    cout<<aku[1]<<endl;
    cout<<aku[2]<<endl;
    
    return 0;
}