#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getAllSubsets(vector<int> &nums, vector<int> &ans, vector<vector<int>> &allSubsets, int idx) {
    if(idx == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }

    // include
    ans.push_back(nums[idx]);
    getAllSubsets(nums, ans, allSubsets, idx + 1);

    // backtrack
    ans.pop_back();

    // skip duplicates
    int i = idx + 1;
    while(i < nums.size() && nums[i] == nums[idx]) i++;

    // exclude
    getAllSubsets(nums, ans, allSubsets, i);
}

vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> allSubsets;
    vector<int> ans;

    getAllSubsets(nums, ans, allSubsets, 0);

    return allSubsets;
}

int main() {
    vector<int> nums = {1,2,2};

    vector<vector<int>> result = subsetsWithDup(nums);

    for(auto vec : result) {
        cout << "{ ";
        for(auto val : vec) {
            cout << val << " ";
        }
        cout << "} ";
    }

    return 0;
}