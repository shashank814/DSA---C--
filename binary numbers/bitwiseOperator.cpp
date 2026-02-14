#include <iostream>
using namespace std;

int main () {
    // int a = 6, b = 10;
    cout << (10 << 2) << endl;
    return 0;

    int n = 6;
    while(n > 1) {
        if(n % 2 != 0) {
            cout << "Not power of 2";
            return 0;
        }
        n = n / 2;
    }
    cout << "Power of 2";
    }


    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        while (n%2 == 0) {
            n = n/2;
        }
        return (n == 1);
      }
    int main() {
        cout << isPowerOfTwo(8);
        return 0;
    }

    int main() {
        int n = 125;
        int rev = 0;

        while(n > 0) {
            int digit = n%10;
            rev = rev * 10 + digit;
            n = n / 10;
        }
        cout << rev;
    }


    bool isPowerOfTwo(int n) {
        return (n > 0) && ((n & n-1) == 0);
    }
    int main() {
        cout << isPowerOfTwo(8);
        return 0;
    }
