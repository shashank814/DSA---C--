#include<iostream>
#include<vector>
using namespace std;

void reverseString(vector<char>& s, int st, int end) {
    if(st >= end) return;

    swap(s[st], s[end]);

    reverseString(s, st + 1, end - 1);
}

int main() {
    vector<char> s = {'h','e','l','l','o'};

    reverseString(s, 0, s.size() - 1);

    for(char val : s) {
        cout << val << " ";
    }

    return 0;
}