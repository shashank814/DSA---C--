#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int marks[size];

    for(int i=0; i<size; i++) {
        cin >> marks[i];
    }
    for(int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

    // smallest in the array
    int arr[5] = {4, 3, 6, 2, 9};
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    for(int i=0; i<5; i++) {
        // if(arr[i] < smallest) {
        //     smallest = arr[i];
        // }
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << smallest << endl;
    cout << largest;


    int arr[5] = {9, 3, 8, 5, 7};
    int smallest = INT8_MAX;
    int index = -1;
    for(int i=0; i<5; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }    
    }
    cout << smallest << endl;
    cout << "index of smallest value is: " << index << endl;


    return 0;
}