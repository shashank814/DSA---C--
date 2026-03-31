#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;


// brute force -> O(n*2)
// int twoSum(vector<int>& vec, int target) {
//     int n = vec.size();
//     int sum = 0;
//     for(int i=0; i<n; i++) {
//         for(int j=n-1; j>0; j--) {
//             if(vec[i] + vec[j] == target) {
//                 cout << i << "," << j << endl;
//             }
//         }
//     }
//     return sum;
// }


// better -> O(nlogn)
// void twoSum(vector<int>& vec, int target) {
//     sort(vec.begin(), vec.end());
//     int st = 0, end = vec.size()-1;
//     while(st < end) {
//         int sum = vec[st] + vec[end];
//         if(sum == target) {
//             cout << vec[st] << "," << vec[end];
//             return;
//         } else if(sum > target) {
//             end--;
//         } else {
//             st++;
//         }
//     }
//     cout << "No pair found";
// }

// optimized O(n)
vector<int> twoSum(vector<int>& arr, int tar) {
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i=0; i<arr.size(); i++) {
        int first = arr[i];
        int sec= tar- first;

        if(m.find(sec) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }

        m[first] = i;
    } 

    return ans;
}

int main() {
    vector<int> vec = {5,2,11,7,15};
    
    vector<int> result = twoSum(vec, 9);
    for(int val : result) {
        cout << val << " ";
    }

    return 0;
}
