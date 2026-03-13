#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {2,4,6,7,4,8};
    int n = 6; 
    int largest = INT_MIN;
    int smallest = INT_MAX;
    // int difference = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        } 
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    cout << "Difference between maximum and minimum = " << (largest - smallest) << endl;
    return 0;
}