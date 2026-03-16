#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 4, 3, -1, -2};
    int n = 5;
    int st = 0, end = n - 1;
    while(st < end) {
        if(arr[st] < 0) {
            st++;
        } else if(arr[end] > 0) {
            end--;
        } else {
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}