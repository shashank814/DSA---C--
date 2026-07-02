#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majorityElement(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();

    int count = 1;
    int ans = nums[0];

    for(int i=1; i<n; i++) {
        if(nums[i] == nums[i-1]) {
            count++;
        } else {
            count = 1;
            ans = nums[i];
        } 

        if(ans > nums.size()/2) {
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << majorityElement(nums);
    return 0;
}