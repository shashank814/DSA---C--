#include<iostream>
using namespace std;

int square() {
    int num;
    cout << "enter number : ";
    cin >> num;
    return num * num;
}
int main() {
    int result = square();
    cout << result;
    return 0;
}