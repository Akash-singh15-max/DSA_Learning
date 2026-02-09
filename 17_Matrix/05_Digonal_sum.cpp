// Diagonal sum of a square matrix
#include<iostream>
using namespace std;
int diagonalSum(int matrix[][4], int n){
    int sum = 0;
    // primary diagonal : j = i
    // secondary diagonal : j = n-i-1
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i];
        if (i != n-1-i)
        {
            sum += matrix[i][n-1-i];
        }
        
    }
    return sum;
}
int main(){
    int n = 4;
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    cout<<"Diagonal Sum : "<<diagonalSum(matrix,n)<<endl;
    return 0;
}