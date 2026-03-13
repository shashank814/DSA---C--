#include<iostream>
using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int n = 5;
//     int target = 7;
//     bool isFound = false;
//     for(int i=0; i<n; i++) {
//         if(arr[i] == target) {
//             cout << "element found";
//             isFound = true;
//             break;
//         } 
//     }
//     if(!isFound) {
//         cout << "element does not exist";
//     }
//     return 0;
// }

int linearSearch(int arr[], int sz) {
    bool isFound = false;
    int target = 5;
    for(int i=0; i<sz; i++) {
        if(arr[i] == target) {
            isFound = true;
            cout << "element found";
            break;
        }
    }
    if(!isFound) {
        cout << "element does not exist";
    }
    return 0;
}
int main() {
    int arr[] = {1,2,3,4,5};
    int sz = 5;
    linearSearch(arr, sz);
    return 0;
}
