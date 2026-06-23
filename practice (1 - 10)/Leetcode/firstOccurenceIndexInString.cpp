#include<iostream>
using namespace std;

int firstOccurence(string &s1, string &s2) {

    for(int i = 0; i <= s1.size() - s2.size(); i++) {
        bool found = true;

        for(int j = 0; j < s2.size(); j++) {
            if(s1[i + j] != s2[j]) {
                found = false;
                break;
            }
        }

        if(found) return i;
    }

    return -1;
}

int main() {
    string s1 = "hello";
    string s2 = "ll";

    cout << firstOccurence(s1, s2);

    return 0;
}