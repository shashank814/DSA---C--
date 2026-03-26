#include<iostream>
using namespace std;

int countDigits(int num) {
    int count  = 0;
    while(num > 0) {
        num = num / 10;
        count++;
    }
    return count;
}
int main() {
    cout << countDigits(124);
    return 0;
}