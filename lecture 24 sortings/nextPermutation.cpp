#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {1,2,4,5,3};
    int n = arr.size();
    int pivot = -1;

    // find pivot
    for(int i=n-2; i>=0; i--) {
        if(arr[i] < arr[i+1]) {
            pivot = i;
            break;
        }
    }
    if(pivot == -1) {
    reverse(arr.begin(), arr.end());
    } else {
    // next larger element
    for(int i=n-1; i>pivot; i--) {
        if(arr[i] > arr[pivot]) {
            swap(arr[i], arr[pivot]);
            break;
        }
    }

    // reverse
    int i=pivot+1, j=n-1;
    while(i<=j) {
        swap(arr[i++], arr[j--]);
       }
    }

    // print result
    for(int x : arr) cout << x << " ";

    return 0;
}