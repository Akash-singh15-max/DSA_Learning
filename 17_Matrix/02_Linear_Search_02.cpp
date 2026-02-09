// Linear Search
// Return pair of index

#include<iostream>
using namespace std;
pair<int,int> linearSearch(int matrix[][3], int row, int col, int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j]==key)
            {
                return {i,j};
            }
            
        }
        
    }
       
}
int main(){
    int row = 4, col = 3;
    int matrix[4][3] = {{1,2,3},
                            {4,5,6},
                            {7,8,9},
                            {10,11,12}};
    pair<int,int> result = linearSearch(matrix,row,col,8);
    cout<<"Cell : ("<<result.first<<", "<<result.second<<")"<<endl;
    return 0;
}