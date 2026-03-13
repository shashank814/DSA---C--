#include<iostream>
#include<vector>
#include<climits>
using namespace std;

// int main() {
//     vector<int> vec = {6,4,3,8,5,9,7};
//     int largest = INT_MIN;
//     int secondLargest = INT_MIN;
//     for(int i=0; i<vec.size(); i++) {
//         if(vec[i] > largest) {
//             secondLargest = largest;
//             largest = vec[i];
//         } else if(vec[i] > secondLargest && vec[i] != largest) {
//             secondLargest = vec[i];
//         } 
//     }
//     cout << largest << endl;
//     cout << secondLargest << endl;
//     return 0;
// }

int secondLargest(vector<int> vec) {
    int largest = INT_MIN;
    int secLargest = INT_MIN;
    for(int i=0; i<vec.size(); i++) {
        if(vec[i] > largest) {
            secLargest = largest;
            largest = vec[i];
        } else if(vec[i] > secLargest && vec[i] != largest) {
            secLargest = vec[i];
        }
    }
    if(secLargest == INT_MIN) {
        cout << "Second largest value does not exist" << endl;
    } else {
        cout << "second largest = " << secLargest << endl;
    }
    cout << "largest = " << largest << endl;

    return 0;
}
int main() {
    vector<int> vec = {5,5,5,6};
    secondLargest(vec);
    return 0;
}