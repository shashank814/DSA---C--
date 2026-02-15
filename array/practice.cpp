#include<iostream>
#include<climits>
using namespace std;

void totalSum(int arr[], int sz, int &sum, int &mul) {
     sum = 0;
     mul = 1;
    for(int i=0; i<sz; i++) {
        sum = arr[i] + sum;
        mul = arr[i] * mul; 
    }
}
int main() {
    int arr[] = {1,2,3,4,5};
    int sz = 5;
    int sum, mul;
    totalSum(arr, sz, sum, mul);
    cout << "sum is: " << sum << endl;
    cout << "mul is: " << mul << endl;
}


void minMax(int arr[], int sz) {
    int smallest = 0;
    int largest = 0;
    for(int i=0; i<sz; i++) {
        if(arr[i] < arr[smallest])
        smallest = i;
        if(arr[i] > arr[largest])
        largest = i;
    }
    swap(arr[smallest], arr[largest]);
}
int main() {
    int arr[] = {4,3,6,-5,9,-7};
    int sz = 6;
    minMax(arr, sz);
    for(int i=0; i<sz; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


int unique(int arr[], int sz) {
    for(int i=0; i<sz; i++) {
        bool isUnique = true;
        for(int j=0; j<sz; j++) {
            if(i != j && arr[i] == arr[j]) {
                isUnique = false;
                // break;
            }
        }
        if(isUnique)
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[] = {2,4,5,3,2};
    int sz = 5;
    unique(arr, sz);
}


// int main() {
//     int arr1[5] = {3,4,6,7,8};
//     int arr2[5] = {2,5,7,4,6};
//     for(int i=0; i<5; i++) {
//         for(int j=0; j<5; j++) {
//            if(arr1[i] == arr2[j]) {
//             cout << arr1[i] << " ";
//            }
//         }
//     }
//     return 0;
// }

int intersection(int arr1[], int arr2[], int sz) {
    for(int i=0; i<sz; i++) {
        for(int j=0; j<sz; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
            }
        }
    }
}
int main() {
    int arr1[] = {3,4,6,7,8};
    int arr2[] = {2,5,7,4,6};
    int sz = 5;
    intersection(arr1, arr2, sz);
    return 0;
}