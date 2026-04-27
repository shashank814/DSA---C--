#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;

int main() {
    vector<int> nums1 = {4,2,5};
    vector<int> nums2 = {3,5,2,4};

    // next greater element
    unordered_map<int, int> m;
    stack<int> s;

    for(int i=nums2.size()-1; i>=0; i--) {
        while(s.size() > 0 && s.top() <= nums2[i]) {
            s.pop();
        }

        if(s.empty()) {
            m[nums2[i]] = -1;
        } else {
            m[nums2[i]] = s.top();
        }

        s.push(nums2[i]);
    }

    // Take the current element from nums1, use it as a key in the map, get its mapped value (next greater element), and push that value into ans.
    vector<int>ans;
    for(int i=0; i<nums1.size(); i++) {
        ans.push_back(m[nums1[i]]);
    }

    // print
    for(int val : ans) {
        cout << val << " ";
    }

    return 0;
}