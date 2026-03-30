#include<iostream>
#include<climits>
using namespace std;

int getMaxSum(int mat[][3], int row, int col) {
    int maxRowSum = INT_MIN;
    for(int i=0; i<row; i++) {
        int sum = 0;
        for(int j=0; j<col; j++) {
            sum = sum + mat[i][j];
        }
        maxRowSum = max(maxRowSum, sum);
    }
    return maxRowSum;
}
int main() {
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {20,21,22}, {10,11,12}};
    int row = 4; 
    int col = 3;

    cout << getMaxSum(matrix, row, col) << endl;
    return 0;
}