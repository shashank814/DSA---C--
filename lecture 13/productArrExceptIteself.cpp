#include<iostream>
#include<vector>
using namespace std;

// void productExceptItself(vector<int> &nums) {
//     vector<int> ans(nums.size());
//     for(int i=0; i<nums.size(); i++) {
//         int product = 1;
//         for(int j=0; j<nums.size(); j++) {
//             if(i != j) {
//                 product *= nums[j];
//             }
//         }
//         ans[i] = product;
//     }
//     for(int i=0; i<nums.size(); i++) {
//         cout << ans[i] << " ";
//     }
// }
// int main() {
//     vector<int> nums = {1,2,3,4};
//     productExceptItself(nums);
//     return 0;
// }


// optimal way
// int main() {
//     vector<int> nums = {1,2,3,4};
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     vector<int> prefix(n, 1);
//     vector<int> suffix(n, 1);
// 
// // prefix
//     for(int i=1; i<n; i++) {
//        prefix[i] = prefix[i-1] * nums[i-1];
//     }
// 
// // suffix
//     for(int i=n-2; i>=0; i--) {
//        suffix[i] = suffix[i+1] * nums[i+1];
//     }
//     for(int i=0; i<n; i++) {
//         ans[i] = prefix[i] * suffix[i];
//     }
//     return 0;
// }


// most optimal way [optimise space complexity]

int main() {
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans(n, 1);

    // prefix
    for(int i=1; i<n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    int suffix = 1;
    // suffix
    for(int i=n-2; i>=0; i--) {
        suffix *= nums[i+1]; 
        ans[i] *= suffix;
    }
    for(int val : ans) {
        cout << val << " ";
    }
    return 0;
}
