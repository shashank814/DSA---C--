#include<iostream>
#include<vector>
#include<string>
using namespace std;

// to check prime -> run loop from 2 to root of n
// string isPrime(int n) {
//     for(int i=2; i*i<=n; i++) {
//         if(n%i == 0) {
//             return "Non Prime";
//         } 
//     }
//     return "Prime";
// }


// prime -> 1 to N
// string checkPrime(int N) {
//     for(int n=2; n<=N; n++) {
//        int isPrime = true;
//        for(int i=2; i*i<=n; i++) {
//         if(n%i == 0) {
//             isPrime = false;
//             break;
//         }
//        }
//        if(isPrime) {
//         cout << n << " ";
//        }
//     } 
// }


// sieve of eratothenes
int countPrimes(int n) {
    vector<bool> isPrime(n+1, true);
    int count = 0;

    for(int i=2; i<n; i++) {
        if(isPrime[i]) {
            count++;

            for(int j=i*2; j<n; j=j+i) {
                isPrime[j] = false;
            }
        }
    }
    return count;
}
int main() {
    int n = 9;
    
    cout << countPrimes(n) << endl;
    return 0;
}