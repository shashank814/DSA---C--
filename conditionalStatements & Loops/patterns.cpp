#include <iostream>
using namespace std;

int main () {

    // printing stars and nums from 1 to n
    int n = 4;
    for(int i = 1; i <= n; i++) {    // line
        for(int j = 1; j <= n; j++) {   // print nums
            cout << "*" << " ";
            // cout << j << " ";
        }
        cout << endl;
    }



    // printing characters
    int n = 4;
    for(int i=1; i<=n; i++) {
        char ch = 'A';
        for(int j=1; j<=n; j++) {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }



    // nums in increasing order in each line
    int n = 4;
    int num = 1;

    for(int i=1; i<=n; i++) {         // line
        for(int j=1; j<=n; j++) {     // increasing number
            cout << num << " ";
            num++;
        }
        cout << endl;
    }


    // chars in increasing order
    int n = 4;
    char ch = 'A';

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }


    // stars according to number of line
    int n = 4;

    for(int i=1; i<=n; i++) {
       for(int j=1; j<i+1; j++) {
        cout << "*";
       }
       cout << endl;
    }

}