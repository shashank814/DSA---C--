#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5};
    vector<int> newArr(arr.size());
    for(int i=0; i<arr.size(); i++) {
        if(i == 0) {
            newArr[i] = arr[i] * arr[i+1];
        } else if(i == arr.size()-1) {
            newArr[i] = arr[i-1] * arr[i];
        } else {
            newArr[i] = arr[i-1] * arr[i+1];
        }
    }

    for(int val : newArr) {
        cout << val << " ";
    }

    return 0;
}