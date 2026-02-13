#include <iostream>
using namespace std;

int main () {
    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    int n = 4;
    for(int i=1; i<=4; i++) {
        for(int j=i; j<=n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        cout << endl;
    }

    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << i;
        }
        cout << endl;
    }

    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i+1; j++) {
            cout << j;
        }
        cout << endl;
    }

    int n = 4;
    int num = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }

    int n = 4;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<i; j++) {
            cout << (i + j) % 2 << " ";
        }
        cout << endl;
    }

    int n = 4;
    for(int i=1; i<=n; i++) {
        char ch = 'A'; 
        for(int j=1; j<=i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    int n = 4;
    for(int i=0; i<n; i++) {
        
        // spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        // 1 triangle
        for(int j=1; j<=i+1; j++) {
            cout << "*";
        }

        // 2nd triangle
        for(int j=i; j>0; j--) {
            cout << "*";
        }
        cout << endl;
    }

    int n = 4;
    for(int i=0; i<n; i++) {

        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }

        for(int j=1; j<=i+1; j++) {
            cout << j;
        }

        for(int j=i; j>0; j--) {
            cout << j;
        }

        cout << endl;
    }


}

