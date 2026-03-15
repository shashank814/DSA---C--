#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {2,2,1,1,1,1,2,2};
    int count = 0, ans = 0;
    for(int i=0; i<vec.size(); i++) {
        if(count == 0) {
            ans = vec[i];
        }
        if(ans == vec[i]) {
            count++;
        } else {
            count--;
        }
    }
    int freq = 0;
    for(int val : vec) {
        if(val == ans) {
            freq++;
        }
    }
    if(freq > vec.size()/2) {
        cout << ans << endl;
    } else {
        cout << "No majority element" << endl;
    }
    
    return 0;
}