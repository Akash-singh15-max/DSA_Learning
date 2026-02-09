// Maximum col sum of a matrix
#include<iostream>
using namespace std;
int getMaxCol(int matrix[][3], int row, int col){
    int maxColSum = INT8_MIN;
    for (int i = 0; i < col; i++)
    {
        int colSumJ = 0;
        for (int j = 0; j < row; j++)
        {
            colSumJ+=matrix[j][i];
        }
        maxColSum = max(maxColSum,colSumJ);
    }
    return maxColSum;
}
int main(){
    int row = 3, col = 3;
    int matrix[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    cout<<"Maximum column sum : "<<getMaxCol(matrix,row,col)<<endl;
    return 0;
}