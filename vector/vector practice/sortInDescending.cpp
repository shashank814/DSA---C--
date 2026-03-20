#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {2,4,5,8};

    sort(vec.begin(), vec.end(), greater<int>());


    // for(int i=0; i<vec.size(); i++) {
    //     for(int j=0; j<vec.size(); j++) {
    //         if(vec[j] < vec[j+1]) {
    //         swap(vec[j], vec[j+1]);
    //     }
    //     }
    // }
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    return 0;
}