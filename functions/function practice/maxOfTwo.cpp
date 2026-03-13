#include<iostream>
using namespace std;

int maxOfTwo() {
    int a;
    cout << "enter a : ";
    cin >> a;
    int b;
    cout << "enter b : ";
    cin >> b;
    if(a > b) {
        cout << "a is greater";
    } else {
        cout << "b is greater";
    }
}
int main() {
    maxOfTwo();
    return 0;
}
