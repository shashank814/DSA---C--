#include<iostream>
using namespace std;

void swapTwoNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a = 5, b = 10;
    swapTwoNumbers(a, b);

    cout << a << " " << b;
    return 0;
}