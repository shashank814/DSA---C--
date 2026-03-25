#include<iostream>
using namespace std;

int main() {
    string str1 = "hello ";   // dynamic => runtime resize
    cout << str1 << endl;

    string str2 = "apna college";
    cout << str2 << endl;

    // concatenate two strings
    string str3 = str1 + str2;
    cout << str3 << endl;

    // compare two strings
    string str4 = "hello";
    string str5 = "hello";
    cout << (str4 == str5) << endl;

    // print all chars
    for(char ch : str3) {
        cout << ch << " ";
    }

    return 0;
}