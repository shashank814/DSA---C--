#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec1 = {1,2,2,4};
    vector<int> vec2 = {2,2};

    // for(int i=0; i<vec1.size(); i++) {
    //     for(int j=0; j<vec2.size(); j++) {
    //         if(vec1[i] == vec2[j]) {
    //             cout << vec1[i] << " ";
    //             break;
    //         }
    //     }
    // }


    vector<bool> used(vec2.size(), false);

    for(int i = 0; i < vec1.size(); i++) {
        for(int j = 0; j < vec2.size(); j++) {
            if(vec1[i] == vec2[j] && !used[j]) {
                cout << vec1[i] << " ";
                used[j] = true; // use only once
                break;
            }
        }
    }
    return 0;
}