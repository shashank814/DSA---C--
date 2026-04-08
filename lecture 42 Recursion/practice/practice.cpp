#include<iostream>
#include<climits>
using namespace std;

// void printn(int n) {
//     if(n == 1) {
//         cout << 1 << " ";
//         return;
//     }
//     printn(n-1);
//         cout << n << " ";
// }

// int sumN(int n) {
//     if(n == 1) {
//        return 1;
//     }
//     return n + sumN(n-1);
// }

// int factN(int n) {
//     if( n == 1) {
//         return 1;
//     }
//     return n * factN(n-1);
// }

// int printArr(int arr[], int size) {
//     if(size == 0) return 0;
//         cout << arr[0] << " ";
//     printArr(arr+1, size-1);
// }

// int maxElem(int arr[], int sz) {
//     if(sz == 1) return arr[0];
//     int ans = maxElem(arr+1, sz-1);
//     return max(arr[0], ans);
// }

// int countDig(int n) {
//     if(n == 0) return 0;
//     return 1 + countDig(n/10);
// }

// int sumArr(int arr[], int sz) {
//     if(sz == 0) return 0;
//     return arr[0] + sumArr(arr+1, sz-1);
// }

// void revStr(string& str, int st, int end) {
//     if(st >= end) return;
//     swap(str[st], str[end]);
//     revStr(str, st+1, end-1);
// }


bool isPlaindrome(string& str, int st, int end) {
    if(st >= end) return -1;

    if(str[st] != str[end]) return false;
    return isPlaindrome(str, st+1, end-1);
}
int main() {
    string str = "aba";
    // int end =  3;

    cout << isPlaindrome(str, 0, str.length()-1);

    return 0;
}
