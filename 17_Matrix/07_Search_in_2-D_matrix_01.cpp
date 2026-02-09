// Search in 2-D matrix

// 1. Each row is sorted in non descending order
// 2. The first integer of each row is greater than the last integer of each row

// Solve with O(log(n*m)) time complexity
// we get, O(log m) and O(log n) => O(log m + log n) => O(log(m*n))

#include<iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>>&matrix, int target, int row){  // O(log n)
    int n = matrix[0].size();
    int start = 0, end = n-1;
    while (start<=end)
    {
        int mid = start + (end - start)/2;
        if (target == matrix[row][mid])
        {
            return true; 
        }
        else if (target > matrix[row][mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        
        
    }
    return false;
}
bool searchMatrix(vector<vector<int>>&matrix, int target){  // O(log m)
    int m = matrix.size(), n = matrix[0].size();
    int startRow = 0, endRow = m-1;
    while (startRow<=endRow)
    {
        int midRow = startRow + (endRow-startRow)/2;
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n-1])
        {
            // found the row
            return searchInRow(matrix,target,midRow);

        }
        else if (target>=matrix[midRow][n-1])
        {
            // down => right
            startRow = midRow + 1;
        }
        else{
            // up => left
            endRow = midRow - 1;
        }
        
        
    }
    return false;
}
int main(){
    vector<vector<int>>matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(matrix,34);

    return 0;
}