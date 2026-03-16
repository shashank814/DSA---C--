#include<iostream>
using namespace std;

void isNumDiv(int num) {
    if(num % 5 == 0 && num % 11 == 0) {
        cout << "number is divisible by both 5 and 11" << endl;
    } else {
        cout << "number is not divisible";
    }
}
int main() {
    int num;
    cout << "enter number : ";
    cin >> num;
    isNumDiv(num);
    return 0;
}