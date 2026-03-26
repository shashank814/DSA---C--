#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reverse = 0;

    while(n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return original == reverse;
}

int main() {
    int num = 121;

    if(isPalindrome(num)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    return 0;
}