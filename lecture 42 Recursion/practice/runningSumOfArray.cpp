#include<iostream>
#include<vector>
using namespace std;

void arraySum(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for(int i=1; i<n; i++) {
        sum = nums[i] + nums[i-1];
        nums[i] = sum;
    }
    for(int val : nums) {
        cout << val << " ";
    }
}

int main() {
    vector<int> nums = {1,2,3,4,5};
    arraySum(nums);

    return 0;
}