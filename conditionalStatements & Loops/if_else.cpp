#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "enter ch: " << endl;
    cin >> ch;

    // if(ch >= 'a' && ch <= 'z') {
    //     cout << "Lowercase\n"; 
    // } else if(ch >= 'A' && ch <= 'Z') {
    //     cout << "Uppercase\n";
    // } else {
    //     cout << "not a character" << endl;
    // }

     if(ch >= 60 && ch <= 90) {
        cout << "Uppercase\n";
    } else {
        cout << "Lowercase" << endl;
    }

    return 0;

}