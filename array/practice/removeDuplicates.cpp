#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if(n == 0) return 0;

    int i = 0; // points to last unique element

    for(int j = 1; j < n; j++) {
        if(arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; // new size
}

int main() {
    int arr[] = {1,1,2,2,3,4,4,5};
    int n = 8;

    int newSize = removeDuplicates(arr, n);

    for(int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}