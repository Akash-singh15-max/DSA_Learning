// Maximum row sum in matrix
#include<iostream>
using namespace std;
int getRowSum(int matrix[][3], int row, int col){
    int maxRowSum = INT8_MIN;
    for (int i = 0; i < row; i++)
    {
        int rowSumI = 0;
        for (int j = 0; j < col; j++)
        {
            rowSumI += matrix[i][j];
        }
        maxRowSum = max(maxRowSum,rowSumI);
    }
    return maxRowSum;
}
int main(){
    int row = 4, col = 3;
    int matrix[4][3] = {{1,2,3},
                            {4,5,6},
                            {7,8,9},
                            {10,11,12}};
    cout<<"Maximum row sum : "<<getRowSum(matrix,row,col)<<endl;

    return 0;
}