#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size(), n = mat[0].size();

    int r = 0, c = n - 1;

    while (r < m && c >= 0) {
        if(target == mat[r][c]) {
            return true;
        } else if(target < mat[r][c]) {
            c--;
        } else {
            r++;
        }
    }
    
    return false;
}

int main() {
    vector<vector<int>> mat = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 3;

    cout << searchMatrix(mat, target);
    return 0;
}