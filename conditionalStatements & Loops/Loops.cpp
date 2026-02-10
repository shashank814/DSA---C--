#include <iostream>
using namespace std;

int main() {

    // print numbers from 1 to n
    int n;
    cout << "enter n: " << endl;
    cin >> n;

    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }
    
    // print numbers from 1 to n using while loop
    int n, count;
    cout << "enter n: " << endl;
    cin >> n;
    count = 1;
    while (count <= n)
    {
        cout << count << " ";
        count++;
    }
    cout << endl;

    // print sum of numbers from 1 to n
    int a, sum;
    cout << "enter a: " << endl;
    cin >> a;
    sum = 0;
    for(int i=1; i<=a; i++) {
        if(i % 2 != 0) {
            sum = sum + i;
        } 
    }
    cout << "sum is: " << sum;
    

    // print sum of odd numbers from 1 to n using while loop
    int a, sum, i;
    cout << "enter a: " << endl;
    cin >> a;
    i =  1;
    sum = 0;
    while(i <= a) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
        i++;
    }
    cout << sum;

    // print sum of even numbers from 1 to n using while loop
    int a, sum;
    cout << "enter a: " << endl;
    cin >> a;
    sum = 0;
    for(int i=1; i<=a; i++) {
        if(i % 2 == 0) {
            sum = sum + i;
        } 
    }
    cout << "sum is: " << sum;


    // prime or not
    int n;
    cout << "enter a number: " << endl;
    cin >> n;
    bool isPrime = true;

    for(int i=2; i<n; i++) {
        if(n%i==0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout << "Prime\n";
    } else {
        cout << "Non-Prime \n";
    }

    // printing ***** this pattern 
    for(int i = 1; i < 5; i++) {     // for line 
        int m = 5;
        for(int i = 1; i <= m; i++) {
            cout << "*";
        }
        cout << endl;
    }



    // print number which are divisible by 3 from 1 to n
    int n;
    cout << "enter n" << endl;
    cin >> n;

    for(int i=1; i<=n; i++) {
        if(i%3 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;


    // factorial
    int n;
    cout << "enter n" << endl;
    cin >> n;

    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    cout << endl;
    cout << "fact of " << n << " is " << fact;

    return 0; 
}