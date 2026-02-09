// 2-D array
// Matrix
#include<iostream>
using namespace std;

int main(){
    int row = 4, col = 3;
    int matrix[row][col];
    
    // input
    cout<<"Enter the elements of matrix : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    // Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;    

    return 0;
}