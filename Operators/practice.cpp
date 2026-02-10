#include <iostream>
using namespace std;

int main() {
    double x, y;
    char op;

    cout << "enter x: " << endl;
    cin >> x;

    cout << "enter operator: " << endl;
    cin >> op;

    cout << "enter y: " << endl;
    cin >> y;

    // switch (op) 
    // {
    // case '+':
    //     cout << "Ans = " << x+y << endl;
    //     break;

    // case '-':
    //     cout << "Ans = " << x-y << endl;
    //     break;

    // case '*':
    //     cout << "Ans = " << x*y << endl;
    //     break;

    // case '/':
    //     if(y != 0) {
    //         cout << "Ans = " << x / y << endl;
    //     } else {
    //         cout << "error" << endl;
    //     }
    //     break;

    // case '%':
    // cout << "Ans = " << (int)x % (int)y << endl;
    // break;;
    
    // default:
    //     break;
    // }

    if(op == '+') {
    cout << "Ans = " << x+y << endl;
    }
    
    if(op == '-') {
         cout << "Ans = " << x-y << endl;
    }

    if(op == '*') {
         cout << "Ans = " << x*y << endl;
    }

    if(op == '/') {
        if(y != 0) {
            cout << "Ans = " << x/y << endl;
        }
        else {
            cout << "error" << endl;
        }
    }


    return 0;

}