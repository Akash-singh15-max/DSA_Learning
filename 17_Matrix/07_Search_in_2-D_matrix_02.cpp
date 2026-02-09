// Search in 2-D matrix

// 1. Integers in each row are sorted in ascending from left to right.
// 2. Integers in each column are sorted in ascending order from top to bottom.

// Solve with O(log(n*m)) time complexity
// we get, O(n+m) => O(log(m*n))

#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>&matrix, int target){
    int m = matrix.size(), n = matrix[0].size();
    int row = 0, col = n-1;
    while (row < m && col >=0)
    {
        if (target == matrix[row][col])
        {
            return true;
        }
        else if(target < matrix[row][col]){
            col--;
        }
        else{
            row++;
        }
        
    }
    return false;
}
int main(){
    vector<vector<int>>matrix = {{1,4,7,11,15},
                                 {2,5,8,12,19},
                                 {3,6,9,16,22},
                                 {10,13,14,17,24},
                                 {18,21,23,26,30}}; 
    cout<<searchMatrix(matrix,5)<<endl;

    return 0;
}