#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {3,5,7,3,7,8,4,9,2};
    int num = 4;
    int count = 0;
    for(int i=0; i<vec.size(); i++) {
        if(vec[i] > num) {
            count++;
        }
    }
    cout << count;
    return 0;
}