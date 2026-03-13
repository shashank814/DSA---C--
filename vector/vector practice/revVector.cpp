#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    vector<int> newVec;
    for(int i=vec.size()-1; i>=0; i--) {
        newVec.push_back(vec[i]);
    }
    for(int i=0; i<newVec.size(); i++) {
        cout << newVec[i] << " ";
    }
    return 0;
}