#include<iostream>
#include<vector>
using namespace std;

int mergeSort(vector<int> &A, int m, vector<int> &B, int n) {
    int idx = m+n-1, i=m-1, j=n-1;
    while(i>=0 && j>=0) {
        if(A[i] >= B[j]) {
            A[idx--] = A[i--];
        } else {
            A[idx--] = B[j--];
        }
    }
    while(j >= 0) {
        A[idx--] = B[j--];
    }
    return 0;
}
int main() {
    vector<int> A = {1,2,3};
    int m = A.size();
    vector<int> B = {2,5,6};
    int n = B.size();

    mergeSort(A, m, B, n);
    for(int i=0; i<m+n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}