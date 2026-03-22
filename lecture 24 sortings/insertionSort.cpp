#include<iostream>
using namespace std;

void insertionSort(int A[], int n) {
    for(int i=1; i<n; i++) {
        int curr = A[i];
        int prev = i-1;
        while(prev >= 0 && A[prev] > curr) {
            A[prev+1] = A[prev];
            prev--;
        }
        A[prev+1] = curr;
    }
}

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {2,5,3,1,4};
    int n = 5;

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}