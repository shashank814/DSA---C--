#include<iostream>
#include<vector>
using namespace std;

// linear search - TC = O(n)
// int singleElement(vector<int> &A) {
//     // check first element
//         if(A[0] != A[1]) return 0;
//     // check last element
//         if(A[A.size()-1] != A[A.size()-2]) return A.size()-1;
//     // check middle elements
//     for(int i=1; i<A.size()-1; i++) {
//         if(A[i-1] != A[i] && A[i] != A[i+1]) {
//             return i;
//         }
//     }
//     return -1;
// }

// Binary Search
int singleElement(vector<int> A) {
    int n = A.size();

    if(n == 1) return 0;

    int st=0, end = n-1;
    while(st <= end) {
        int mid = st + (end-st)/2;

        if(mid == 0 && A[0] != A[1]) return A[mid];
        if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];

        if(A[mid] != A[mid-1] && A[mid] != A[mid+1]) return A[mid];

        if(mid % 2 == 0) {    // even
            if(A[mid-1] == A[mid]) {   // left
                end = mid - 1;
            } else {            // right
                st = mid + 1;
            }
        } else {       // odd
            if(A[mid-1] == A[mid]) {    // right
                st = mid + 1;
            } else {    // left
                end = mid - 1;
            }
        }
    }
}
int main() {
    vector<int> A = {1,1,2,3,3,4,4,5,5};

    cout << singleElement(A) << endl;
    return 0;
}