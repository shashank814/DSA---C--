#include <iostream>
#include<climits>
#include<vector>
using namespace std;


// print all possible subarray
int main() {
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    for(int st=0; st<n; st++) {
        for(int end=st; end<n; end++) {
            for(int i=st; i<=end; i++) {
                cout << arr[i] ;
            }
            cout << " ";
        }
        cout << endl;
    }
}


// max subarray sum
int main() {
    int n = 5;
    int arr[5] = {1,2,3,4,5};

    int maxSum = INT_MIN;

    for(int st=0; st<n; st++) {
        int currSum = 0;
        for(int end=st; end<n; end++) {
            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "max subarray sum = " << maxSum << endl;
    return 0;
}


// kadane's algorithm
int main() {
    vector<int> subArraySum = {4,-3,2,1,-2,7};
    int currSum = 0, maxSum = INT_MIN;
    for(int val=0; val<subArraySum.size(); val++) {
        currSum = currSum + subArraySum[val];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
    cout << maxSum << endl;
    return 0;
}
