#include<iostream>
using namespace std;

int gcdOfTwoNumbers(int a, int b) {
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
int main() {
    cout << gcdOfTwoNumbers(48, 18);
    return 0;
} 