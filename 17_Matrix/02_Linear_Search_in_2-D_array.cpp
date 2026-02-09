//  Linear search in 2-D array
#include<iostream>
using namespace std;
bool linearSearch(int matrix[][3], int row, int col, int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j]==key)
            {
                return true;
            }
            
        }
        
    }
    return false;
}
int main(){
    int row = 4, col = 3;
    int matrix[4][3] = {{1,2,3},
                            {4,5,6},
                            {7,8,9},
                            {10,11,12}};
    cout<<linearSearch(matrix,row,col,8)<<endl;
    

    return 0;
}