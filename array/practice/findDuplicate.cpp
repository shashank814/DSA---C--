#include<iostream>
using namespace std;

int main() {
    int arr[] = {6,4,6,8,9};
    int n = 5;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                cout << "Duplicate found : " << arr[i] << endl;
            }
        }
    }
    return 0;
}