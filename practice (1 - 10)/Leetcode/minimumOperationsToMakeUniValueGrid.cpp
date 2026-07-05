#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int minOperations(vector<vector<int>> &grid, int x) {
    vector<int> arr;

    // flatten
    for(auto &row : grid) {
        for(int val : row) {
            arr.push_back(val);
        }
    }

    // feasibility
    int base = arr[0];
    for(int val : arr) {
        if(abs(val - base) % x != 0) {
            return -1;
        }
    }

    // sort arr
    sort(arr.begin(), arr.end());

    // calculate median
    int median = arr[arr.size() / 2];

    // ops -> count
    int ops = 0;
    for(auto val : arr) {
        ops += abs(val - median) / x;
    }

    return ops;
}

int main() {
    vector<vector<int>> grid = {{1,5}, {2,3}};

    cout << minOperations(grid, 1);
    return 0;
}
