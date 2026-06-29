#include<iostream>
#include<vector>
using namespace std;

bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for(int i=0; i<nums.size()-1; i++) {
        if(nums[i] > nums[i+1]) increasing = false;
        if(nums[i] < nums[i+1]) decreasing = false;
    }
    return increasing || decreasing;
}

int main() {
    vector<int> nums = {6,5,4,4};

    cout << isMonotonic(nums);

    return 0;
}