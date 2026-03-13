#include<iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        int lastDigit = num % 10;
        sum += lastDigit;
        num = num / 10;
    }
    return sum;
}
int main() {
    int num;
    cout << "enter numbers : ";
    cin >> num;
    cout << sumOfDigits(num);
    return 0;
}