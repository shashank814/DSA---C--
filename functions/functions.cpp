#include <iostream>
using namespace std;

int sumOfNums(int n) {
    int sum = 0, i = 1;
    while(n>=i) {
        sum = sum + i;
        i++;
    }
    return sum;
}
int main() { 
    cout << sumOfNums(5) << endl;
    return 0;
}


int factN(int n) {
    int fact = 1, i = 1;
    while (n>=i) { 
        fact = fact * i;
        i++;
    }
    // for(int i=1; i<=n; i++) {
    //     fact = fact * i;
    // }
    return fact;
}
int main() {
    cout << factN(4) << endl;
    return 0;
}

int sumOfDigits(int num) {
    int digitSum = 0, lastDigit;
    while(num > 0) {
        lastDigit = num % 10;
        num = num / 10;
        digitSum = digitSum + lastDigit;
    }
    return digitSum;
}
int main() {
    cout << sumOfDigits(145);
    return 0;
}


int factN(int n) {
    int fact = 1, i = 1;
    while (n>=i) { 
        fact = fact * i;
        i++;
    }
    return fact;
}
int nCr(int n, int r) {
    int fact_n = factN(n);
    int fact_r = factN(r);
    int fact_nmr = factN(n-r);
    return fact_n / (fact_r * fact_nmr);
}
int main() {
    int n=8, r=2;
    cout << nCr(n, r);
    return 0;
}


int isPrime(int  n) {
    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        } 
    }
    return true;
}
int main() {
    cout << isPrime(9) << endl;
    return 0;
}


bool isPrime1(int n) {
   if(n < 2) return false;
   for(int i=2; i<=n/2; i++) {
    if(n%i == 0) {
        return false;
    }
   }
   return true;
}
int main() {
    int num = 20;
    for(int i=1; i<=num; i++) {
        if(isPrime1(i)) {
            cout << i << " ";
        }
    }
    return 0;
}


void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << a << " " << b << " ";
    for(int i=3; i<=n; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main() {
    fibonacci(10);
    return 0;
}


int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    int a = 0, b = 1, c;
    for(int i=2; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
int main () {
    int n;
    cout << "enter n: ";
    cin >> n;

    cout << fib(n);
    return 0;
}