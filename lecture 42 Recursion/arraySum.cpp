#include<iostream>
using namespace std;

int sumN(int arr[], int size) {
    if(size == 0) return 0;

    int sum = arr[0];
    int remain = sumN(arr+1, size-1);
    return sum + remain;
}
int main() {
    int arr[5] = {2,3,8,7,9};
    int size = 5;

    cout << sumN(arr, size);

    return 0;
}