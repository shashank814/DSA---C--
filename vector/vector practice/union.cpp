#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main() {
    vector<int> vec1 = {1,2,2,4};
    vector<int> vec2 = {1,2,3};
    
    // set<int> unionSet;
    // for(int x : vec1) unionSet.insert(x);
    // for(int x : vec2) unionSet.insert(x);
    // for(int x : unionSet) cout << x << " ";



    vector<int> unionVec;
    for(int x : vec1) unionVec.push_back(x);
    // Add elements of vec2 if not already in unionVec
    for(int x : vec2) {
        bool found = false;
        for(int y : unionVec) {
            if(x == y) {
                found = true;
                break;
            }
        }
        if(!found) unionVec.push_back(x);
    }

    for(int x : unionVec) cout << x << " ";
    return 0;
}