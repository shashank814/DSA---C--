#include<iostream>
using namespace std;

bool isPlaindrome(string str, int i, int j) {
    if(i > j) return true;

    if(str[i] != str[j]) return false;
    else {
        return isPlaindrome(str, i+1, j-1);
    }
}
int main() {
    string str = "BookkooB";
    cout << endl;

    bool checkPalindrome = isPlaindrome(str, 0, str.length()-1);

    if(checkPalindrome){
        cout << "Palindrome";
    } else {
        cout << " Not Palindrome";
    }
    return 0;
}