// // Functions of vector
// 1. size
// 2. push_back
// 3. pop_back
// 4. front
// 5. back
// 6. at


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec;
    cout<<"Size of vector = "<<vec.size()<<endl;    // size

    vec.push_back(25);  // it put 25 in vector from back side
    vec.push_back(3);
    vec.push_back(10);
    cout<<"After push_back, size = "<<vec.size()<<endl;
    
    vec.pop_back();     // 10
    cout<<"After pop_back, size = "<<vec.size()<<endl;

    cout<<vec.front()<<endl;;    // print first value

    cout<<vec.back()<<endl;;     // print last value

    cout<<vec.at(0)<<endl;      // gives the value of 0th index

    cout<<endl;
    for(int val : vec){
        cout<<val<<endl;
    }

    return 0;
}