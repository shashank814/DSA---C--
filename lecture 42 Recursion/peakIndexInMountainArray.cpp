#include<iostream>
#include<vector>
using namespace std;

int peakIndexMountainArray(vector<int> &A, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st)/2;

        if(mid > 0 && mid < A.size()-1) {
            if(A[mid-1] < A[mid] && A[mid] > A[mid+1]) {
            return mid;
        } else if(A[mid-1] < A[mid]) {
            return peakIndexMountainArray(A, mid+1, end);
        } else {
            return peakIndexMountainArray(A, st, mid-1);
        }
        }
    }
    return -1;
}

int main() {
    vector<int> A = {0,2,4,8,9,3,1};
    cout << peakIndexMountainArray(A, 0, A.size()-1);
    return 0;
}