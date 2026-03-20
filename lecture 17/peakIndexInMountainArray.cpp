#include<iostream>
#include<vector>
using namespace std;


// Linear search - TC = O(n)
// int peakIndexMountainArray(vector<int> &A) {
//     for(int i=1; i<A.size()-2; i++) {
//         if(A[i] > A[i-1] && A[i] > A[i+1]) {
//             return i;
//         }
//     }
//     return -1;
// }


// Binary Search - TC = o(logn)
int peakIndexMountainArray(vector<int> &A) {
    int st = 1, end = A.size()-2;
    while (st <= end) {
        int mid = st + (end - st)/2;

        if(A[mid-1] < A[mid] && A[mid] > A[mid+1]) {
            return mid;
        } else if(A[mid-1] < A[mid]) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> A = {0,2,4,8,9,3,1};
    cout << peakIndexMountainArray(A);
    return 0;
}