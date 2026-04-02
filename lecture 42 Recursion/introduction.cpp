#include<iostream>
using namespace std;

// n to 1
void printNum(int n) {
    if(n == 1) {           // base case
        cout << 1 << endl;
        return;
    }
    cout << n << " ";
    printNum(n-1);
}

// factorial
int factorial(int n) {
    if(n == 0) {           // base case
        return 1;
    }
    return n * factorial(n-1);
}

// sum -> n to 1
int sumN(int n) {
    if(n == 1) {
        return 1;
    }
    return n + sumN(n-1);
}

int main() {
    printNum(4);

    cout << factorial(4) << endl;

    cout << sumN(4) << endl;
    return 0;
}