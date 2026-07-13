#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

bool canShip(vector<int>& weights, int days, int capacity) {
    int usedDays = 1;
    int currLoad = 0;

    for (int w : weights) {
        if (currLoad + w <= capacity) {
            currLoad += w;
        } else {
            usedDays++;
            currLoad = w;
        }
    }

    return usedDays <= days;
}

int shipWithinDays(vector<int>& weights, int days) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (canShip(weights, days, mid)) {
            ans = mid;
            high = mid - 1; // try smaller capacity
        } else {
            low = mid + 1;  // need bigger capacity
        }
    }

    return ans;
}

int main() {
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;

    return 0;
}