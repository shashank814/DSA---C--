#include<iostream>
using namespace std;

int main() {
    int arr1[] = {1,2,3,4,5};
    int n1 = 5;
    int arr2[5];
    int n2 = 5;
    for(int i=0; i<n1; i++) {
        arr2[i] = arr1[i]; 
    }
    for(int i=0; i<n1; i++) {
        cout << arr2[i] << " "; 
    }
    return 0;
}