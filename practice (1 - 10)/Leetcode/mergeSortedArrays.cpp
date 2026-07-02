#include<iostream>
#include<vector>
using namespace std;

void mergeArray(vector<int> &A, int m, vector<int> &B, int n) {
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while(i >= 0 && j >= 0) {
        if(A[i] >= B[j]) {
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }
    while(j >= 0) {
        A[idx--] = B[j--];
    }

    for(int val : A) {
        cout << val << " ";
    }
}

int main() {
    vector<int> A = {1,2,3};
    vector<int> B = {2,5,6};
    int m = A.size();
    int n = B.size();

    A.resize(m + n); 

    mergeArray(A, m, B, n);

    return 0;
}