#include<iostream>
#include<vector>
using namespace std;

// int main() {
//     int arr[] = {2,11,7,5};
//     int n = 4;
//     int target = 12;
//     for(int i=0; i<n; i++) {
//         for(int j=n-1; j>0; j--) {
//             if(arr[i] + arr[j] == target) {
//                 cout << arr[i] << " + " << arr[j] << " = " << arr[i] + arr[j] << endl;
//             }
//             break;
//         }
//     }
//     return 0;
// }

vector<int> pairSum(vector<int> &vec, int target) {
    vector<int> ans;
    for(int i=0; i<vec.size(); i++) {
        for(int j=vec.size()-1; j>i; j--) {
            if(vec[i] + vec[j] == target) {
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
            }
        }
    }  
    return ans;
}
int main() {
    vector<int> vec = {2,11,7,5};
    int target = 9;

    vector<int> result = pairSum(vec, target);
    cout << result[0] << " " << result[1];
    return 0; 
}