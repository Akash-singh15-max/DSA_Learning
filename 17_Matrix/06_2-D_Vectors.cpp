// 2-D Vector
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,5,6,11,13},{7,8,9}};
    // here in 2nd row size is different, because size can be resize in vector

    // rows => mat.size();
    // cols => mat[i].size();   (ek row me kitne element hai)
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}