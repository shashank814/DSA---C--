#include<iostream>
using namespace std;

// int main() {
//     int arr[7] = {4,2,7,8,1,2,5};
//     int target = 8;
//     for(int i=0; i<7; i++) {
//         if(arr[i] == target) {
//             cout << i;
//             break;
//         } 
//     }
//     return -1;
// }

int linearSearch(int arr[], int sz, int target) {
    for(int i=0; i<sz; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    int target = 8;
    cout << linearSearch(arr, sz, target) << endl;
    return 0;
}