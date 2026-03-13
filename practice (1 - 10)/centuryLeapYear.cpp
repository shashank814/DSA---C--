#include<iostream>
using namespace std;

int main() {
    int year; 
    cout << "Enter year = ";
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << year << " is a leap year";
    } else if(year % 100 == 0) {
        cout << year << " is a century year";
    } else {
        cout << year << " is a common year";
    }
     return 0;
}