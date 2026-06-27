#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int pairSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());

    int sum = 0;
    for(int i=0; i<nums.size(); i+=2) {
        sum += nums[i];
    }

    return sum;
    
}

int main() {
    vector<int> nums = {1,4,3,2};

    int ans = pairSum(nums);

    cout << ans << endl;

    return 0;
}