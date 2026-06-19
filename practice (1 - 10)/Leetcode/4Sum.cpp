#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int tar) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;

    for(int i=0; i<n; i++) {
        if(i > 0 && nums[i] == nums[i-1]) continue;
        
        for(int j=i+1; j<n; ) {
            int p = j+1, q = n-1;

            while(p < q) {
            long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];

            if(sum < tar) {
                p++;
            } else if(sum > 0) {
                q--;
            } else {
                ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                p++;
                q--;

                while(p < q && nums[p] == nums[p-1]) p++;
            }
        }
        j++;
        while(j < n && nums[j] == nums[j-1]) j++;
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1,0,-1,0,-2,2};
    int tar = 0;

    vector<vector<int>> result = threeSum(nums, tar);

    for (auto &vec : result) {
    for (auto &val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

    return 0;
}