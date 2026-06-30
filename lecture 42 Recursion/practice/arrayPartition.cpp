#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int sum = 0;

    for(int i=0; i<nums.size(); i++) {
        if(i%2 == 0) {
            sum += nums[i];
        }
    }

    return sum;
}

int main() {
    vector<int> nums = {6,2,6,5,1,2};

    cout << arrayPairSum(nums);

    return 0;
}