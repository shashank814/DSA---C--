#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int> &nums) {
    int ans = 0;
    for(int val : nums) {
        ans = ans ^ val;
    }
    return ans;
}

int main() {
    vector<int> nums = {1,2,4,1,2};

    cout << singleNumber(nums);
    return 0;
}