#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int secondLargest(vector<int> vec) {
    int n = vec.size();
    int thirdLargest = INT_MIN;
    int secLargest = INT_MIN;
    int largest = INT_MIN;
    for(int i=0; i<n; i++) {
        if(vec[i] > largest) {
            thirdLargest = secLargest;
            secLargest = largest;
            largest = vec[i];
        } else if(vec[i] > secLargest && vec[i] != largest && vec[i] != thirdLargest) {
            secLargest = vec[i];
        } else if(vec[i] > thirdLargest && vec[i] != secLargest && vec[i] != largest) {
            thirdLargest = vec[i];
        }
    }
    if(secLargest == INT_MIN) {
        cout << "does not exist" << endl;
    } else {
        cout << "second largest : " << secLargest << endl;
    }
    if(thirdLargest == INT_MIN) {
        cout << "third largest does not exist";
    } else {
        cout << "third largest : " << thirdLargest << endl;
    }
    cout << "largest " << largest;

    return secLargest;
}
int main() {
    vector<int> vec = {8,4,6,2,3,7,9};

    secondLargest(vec);
    return 0;
}