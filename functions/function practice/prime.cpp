#include<iostream>
using namespace std;

void prime() {
    int num;
    cout << "enter number : ";
    cin >> num;
    bool isPrime = true;
    for(int i=2; i<num; i++) {
        if(num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout << num << " is prime";
    } else {
        cout << num << " is not prime";
    }
}
int main() {
    prime();
    return 0;
}