#include<iostream>
using namespace std;
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = 5;
//     int last = arr[n-1];
//     for(int i=n-1; i>0; i--) {
//         arr[i] = arr[i-1];
//     }
//     arr[0] = last;
//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

int shiftArray(int arr[], int sz) {
    int last = arr[sz-1];
    for(int i=sz-1; i>0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    for(int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int sz = 5;
    shiftArray(arr, sz);
    return 0;
}