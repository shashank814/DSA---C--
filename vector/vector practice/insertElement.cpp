#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {2,4,5,8};

    int position = 2;
    int value = 10;

    vec.insert(vec.begin() + position, value);
    
    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }

    return 0;
}