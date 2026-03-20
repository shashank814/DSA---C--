#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &vec, int n) {
    if(n == 0) return 0;

    int i = 0; // points to last unique element

    for(int j = 1; j < n; j++) {
        if(vec[i] != vec[j]) {
            i++;
            vec[i] = vec[j];
        }
    }

    return i + 1; // new size
}

int main() {
    vector<int> vec = {1,1,2,2,3,4,4,5};
    int n = 8;

    int newSize = removeDuplicates(vec, n);

    for(int i = 0; i < newSize; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}