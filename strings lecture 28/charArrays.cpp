#include<iostream>
using namespace std;

int main() {
    char str[] = {'a', 'b', 'c'};  // char array
    char str1[] = {'a', 'b', 'c', '\0'};  // \0 helps to convert char array into string
    // cout << str1;

    // print each element of string
    // char str2[12];
    // cout << "enter char array : ";
    // cin.getline(str2, 12);
    // for(char ch : str2) {
    //     cout << ch << " ";
    // }
    // cout << endl;



    // calculate size of string
    char str3[] = "hello world";
    int len = 0;
    for(int i=0; i<str3[i] != '\0'; i++) {
        len++;
    }
    cout << "length of string : " << len << endl;

    return 0;
}