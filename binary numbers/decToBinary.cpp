#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0, pow = 1;
    while(decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}
int main() {
    int decNum = 42;
    // cout << decToBinary(decNum);
    for(int i=1; i<=10; i++) {
        cout << decToBinary(i) << endl;;
    }

    return 0;
}


int binToDecimal(int binNum) {
    int ans = 0, pow = 1;
    while (binNum > 0) { 
        int rem = binNum % 10;
        ans += rem * pow;
        binNum = binNum / 10;
        pow *= 2;
    }
    return ans;
}
int main() {
    // int binNum = 1001;
    cout << binToDecimal(1001) << endl;
    return 0;
}