#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter ch : ";
    cin >> ch;
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "It is alphabet";
    } else if(ch >= '0' && ch <= '9') {
        cout << "It is a digit";
    } else {
        cout << "special character";
    }
    return 0;
}