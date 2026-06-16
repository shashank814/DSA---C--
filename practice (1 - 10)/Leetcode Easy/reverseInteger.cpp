#include<iostream>
#include<climits>
using namespace std;

int reverseInteger(int x) {
    int revNum = 0;
    while(x != 0) {
        int dig = x%10;
        if(revNum > INT_MAX || revNum < INT_MIN) {
            return 0;
        }
        revNum = revNum * 10 + dig;
        x = x/10;
    }
    return revNum;
}

int main() {
    int x = 123;

    cout << reverseInteger(x);
    return 0;
}