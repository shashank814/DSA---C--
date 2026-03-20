#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {2,3,4,2,3,4,2};
    int n = vec.size();

    for(int i=0; i<n; i++) {
            int count = 0;
        for(int j=i+1; j<n; j++) {
            if(vec[i] == vec[j]) {
                count++;
            }
        }
        cout << count << " ";
    }
    return 0;
}