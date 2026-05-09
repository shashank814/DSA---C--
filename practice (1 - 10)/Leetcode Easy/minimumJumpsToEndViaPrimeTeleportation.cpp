#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int minJumps(vector<int>& nums) {
    int n = nums.size();

    // Precompute: value -> indices divisible by that value
    unordered_map<int, vector<int>> mp;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && nums[j] % nums[i] == 0) {
                mp[nums[i]].push_back(j);
            }
        }
    }

    vector<bool> visited(n, false);
    queue<int> q;

    q.push(0);
    visited[0] = true;

    int steps = 0;

    while(!q.empty()) {
        int size = q.size();

        while(size--) {
            int i = q.front();
            q.pop();

            // reached end
            if(i == n - 1) return steps;

            // adjacent moves
            if(i + 1 < n && !visited[i + 1]) {
                visited[i + 1] = true;
                q.push(i + 1);
            }

            if(i - 1 >= 0 && !visited[i - 1]) {
                visited[i - 1] = true;
                q.push(i - 1);
            }

            // prime teleport
            if(isPrime(nums[i])) {
                for(int j : mp[nums[i]]) {
                    if(!visited[j]) {
                        visited[j] = true;
                        q.push(j);
                    }
                }
            }
        }

        steps++;
    }

    return -1;
}

int main() {
    vector<int> nums = {2,3,4,7,9};

    cout << minJumps(nums);

    return 0;
}