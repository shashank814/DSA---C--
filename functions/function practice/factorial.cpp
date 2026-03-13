#include<iostream>
using namespace std;

int factorial() {
    int num;
    cout << "enter number : ";
    cin >> num;
    int fact = 1;
    for(int i=1; i<=num; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    cout << factorial();
    return 0;
}