// Linear search in vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={2,4,2,6,4,9};
    int target = 9;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i]==target)
        {
            cout<<i<<endl;
        }
        
    }
    

    return 0;
}