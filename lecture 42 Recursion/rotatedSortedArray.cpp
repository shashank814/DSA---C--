#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& A, int st, int end, int tar) {
    // base case
    if(st > end) return -1;

    int mid = st + (end - st) / 2;

    if(A[mid] == tar) return mid;

    // left half sorted
    if(A[st] <= A[mid]) {
        if(A[st] <= tar && tar <= A[mid]) {
            return search(A, st, mid - 1, tar);
        } else {
            return search(A, mid + 1, end, tar);
        }
    }
    // right half sorted
    else {
        if(A[mid] <= tar && tar <= A[end]) {
            return search(A, mid + 1, end, tar);
        } else {
            return search(A, st, mid - 1, tar);
        }
    }
}

int main() {
    vector<int> arr = {4,5,6,7,0,1,2};
    int tar = 0;

    cout << search(arr, 0, arr.size()-1, tar);
    return 0;
}