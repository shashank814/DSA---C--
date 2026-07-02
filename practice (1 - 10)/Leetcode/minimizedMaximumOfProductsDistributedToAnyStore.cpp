#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minimizedMaximum(int n, vector<int>& quantities) {
    int low = 1;
    int high = *max_element(quantities.begin(), quantities.end());
    int ans = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        long long totalStores = 0;

        for (int q : quantities) {
            totalStores += (q + mid - 1) / mid; // ceil(q / mid)
        }

        if (totalStores <= n) {
            ans = mid;
            high = mid - 1; // try smaller
        } else {
            low = mid + 1; // increase x
        }
    }

    return ans;
}

int main() {
    int n = 7;
    vector<int> quantities = {15,10,10};

    cout << minimizedMaximum(n, quantities);

    return 0;
}