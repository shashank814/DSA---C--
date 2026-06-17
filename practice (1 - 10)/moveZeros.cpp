#include<iostream>
using namespace std;

int main() {
    int arr[5] = {0,1,0,1,1};
    int j = 0;
    for(int i=0; i<5; i++) {
        if(arr[i] != 0) {
           swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int val : arr) {
        cout << val << " ";
    }
    return 0;
}