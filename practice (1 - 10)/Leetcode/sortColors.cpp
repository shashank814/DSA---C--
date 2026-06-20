#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& colors) {

    int low = 0, mid = 0, high = colors.size()-1;

    while(mid <= high) {
        if(colors[mid] == 0) {
            swap(colors[low], colors[mid]);
            low++;
            mid++;
        } else if(colors[mid] == 2) {
            swap(colors[mid], colors[high]);
            high--;
        } else {
            mid++;
        }
    }

    for(int val : colors) {
        cout << val << " ";
    }
}

int main() {
    vector<int> colors = {2,0,1};

    sortColors(colors);

    return 0;
}