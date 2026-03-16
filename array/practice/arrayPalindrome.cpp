#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,0,0,1};
    int n = 4;
    int st = 0, end = n-1;
    int isPalindrome = true;
    while(st<end) {
        if(arr[st] != arr[end]) {
            isPalindrome = false;
            break;
        }
        st++;
        end--;
    }
    if(isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }
    
    return 0;
}