#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {

    int maxWater = 0;
    int currWater = 0;
    int left = 0, right = height.size()-1;
    
    while(left < right) {
        if(height[left] < height[right]) {
            currWater = (right-left) * min(height[left], height[right]);
            left++;
        } else {
            currWater = (right-left) * min(height[left], height[right]);
            right--;
        }
        maxWater = max(maxWater, currWater);
    }

    return maxWater;
}

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout << maxArea(height);

    return 0;
}