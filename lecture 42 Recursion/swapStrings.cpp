#include<iostream>
using namespace std;

void reverseString(string& str, int i) {

    int n = str.length();

    if(i >= n/2) return;

    swap(str[i], str[n-i-1]);
    

    reverseString(str, i+1);
}

int main() {
    string str = "abc";
    int st = 0;
    int end = str.size()-1;

    reverseString(str, 0);

    cout << str << endl;
    return 0;
}