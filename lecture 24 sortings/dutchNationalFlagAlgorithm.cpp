#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// Brute Force Code
// int main() {
//     vector<int> vec = {2,0,1,1,2,0};
//     int n = 6;
//     sort(vec.begin(), vec.end());
//     for(int i=0; i<n; i++) {
//         cout << vec[i] << " ";
//     }
//     return 0;
// }


// Optimal Code
// int sorting(vector<int> &nums) {
//     int n = nums.size();
//     int count0 = 0, count1 = 0, count2 = 0;
//     for(int i=0; i<n; i++) {
//         if(nums[i] == 0) count0++;
//         if(nums[i] == 1) count1++;
//         else count2++;
//     }
//     int idx = 0;
//     for(int i=0; i<count0; i++) {
//         nums[idx++] = 0;
//     }
//     for(int i=0; i<count1; i++) {
//         nums[idx++] = 1;
//     }
//     for(int i=0; i<n; i++) {
//         nums[idx++] = 2;
//     }
// }


// Most Optimized Way
void sorting(vector<int> &nums) {
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        } else if(nums[mid] == 1) {
            mid++;
        } else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    return;
}

int main() {
    vector<int> nums = {2,0,1,1,2,0};
    sorting(nums);
    for(int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}