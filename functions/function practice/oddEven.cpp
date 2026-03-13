#include<iostream>
using namespace std;

int oddEven() {
    int num;
    cout << "enter number : ";
    cin >> num;
    if(num%2==0) {
        cout << num << " is even";
    }
    if(num%2 != 0) {
        cout << num << " is odd";
    }
}
int main() {
    oddEven();
    return 0;
}