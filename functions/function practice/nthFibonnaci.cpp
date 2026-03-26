#include<iostream>
using namespace std;

int fibonacci(int n) {

    if(n == 0) return 0;
    if(n == 1) return 1;

    int a = 0, b = 1, sum = 0;
    int i = 2;
    while(i <= n) {
        sum = a + b;
        a = b;
        b = sum;
        i++;
    }
    return b;
}
int main () {
    int n = 6;
    cout << fibonacci(n);
    return 0;
}