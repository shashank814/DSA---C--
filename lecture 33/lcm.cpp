#include<iostream>
using namespace std;

int gcdofTwoNumbers(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if(a == 0) return b;
    return a;
}

int lcm(int a, int b) {
    int gcd = gcdofTwoNumbers(a, b);
    return (a*b)/gcd;
}

int main() {
    cout << lcm(48, 18);
    return 0;
} 