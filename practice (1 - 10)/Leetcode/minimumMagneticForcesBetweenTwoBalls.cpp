#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canPlaceBalls(vector<int>& position, int m, int minDist) {
    int count = 1; // first ball at position[0]
    int lastPos = position[0];

    for(int i = 1; i < position.size(); i++) {
        if(position[i] - lastPos >= minDist) {
            count++;
            lastPos = position[i];
        }

        if(count >= m) return true;
    }

    return false;
}

int maxDistance(vector<int>& position, int m) {
    sort(position.begin(), position.end());

    int low = 1;
    int high = position.back() - position.front();
    int ans = 0;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(canPlaceBalls(position, m, mid)) {
            ans = mid;        
            low = mid + 1;
        } else {
            high = mid - 1;   
        }
    }

    return ans;
}

int main() {
    vector<int> position = {1,2,3,4,7};
    int m = 3;

    cout << maxDistance(position, m);

    return 0;
}