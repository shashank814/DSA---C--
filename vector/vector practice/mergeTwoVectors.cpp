#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec1 = {1,2,3};
    vector<int> vec2 = {4,5};

    int n1 = 3, n2 = 2;
    int merged[n1 + n2];

    for(int i=0; i<n1; i++) {
        merged[i] = vec1[i];
    }
    for(int i=0; i<n2; i++) {
        merged[n1 + i] = vec2[i];
    }

    cout << "Merged array : ";

    for(int i=0; i<n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    return 0;
}