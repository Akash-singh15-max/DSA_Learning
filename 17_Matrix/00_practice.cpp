// Print sprial matrix
#include<iostream>
#include<vector>
using namespace std;

vector<int>spiralOrder(vector<vector<int>>&matrix){
    int m = matrix.size(), n = matrix[0].size();
    int startRow = 0, startCol = 0, endRow = m-1, endCol = n-1;
    vector<int>ans;
    while (startRow<=endRow && startCol<=endCol)
    {
        // top
        for (int i = startCol; i <= endCol; i++)
        {
            ans.push_back(matrix[startRow][i]);
        }
        
        // right
        for (int j = startRow+1; j <= endRow; j++)
        {
            ans.push_back(matrix[j][endCol]);
        }
        
        // bottom
        for (int i = endCol-1; i >= startCol; i--)
        {
            if (startRow==endRow)
            {
                break;

            }
            ans.push_back(matrix[endRow][i]);
            
        }
        
        // left
        for (int j = endRow-1; j >= startRow+1; j--)
        {
            if (startCol==endCol)
            {
                break;
            }
            ans.push_back(matrix[j][startCol]);
        }
        startRow++;
        startCol++;
        endRow--;
        endCol--;

        

    }
    return ans;
}

int main(){
    vector<vector<int>>matrix = {{1,2,3,4},
                                 {5,6,7,8},
                                 {9,10,11,12},
                                 {13,14,15,16}};

    vector<int>ans = spiralOrder(matrix);
    for(int val : ans){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}