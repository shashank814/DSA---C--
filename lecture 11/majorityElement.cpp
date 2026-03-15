#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int main() {
//     int arr[] = {2,2,1,1,1,2,2,2};
//     int n = 8;
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//             }
//         }
//         if(count>n/2) {
//             cout << arr[i] << endl;
//             break;
//         }
//     }
//     return 0;
// }

int main() {
    vector<int> vec = {2,2,1,1,1,2,2,2,1,1,1,1};

    sort(vec.begin(), vec.end());
    int count = 1, ans = vec[0];
    for(int i=1; i<vec.size(); i++) {
        if(vec[i] == vec[i-1]) {
            count++;
        } else {
            count = 1;
            ans = vec[i];
        }
        if(count > vec.size()/2) {
            cout << ans << endl;
            break;
        } 
    }
    return 0;
}
 