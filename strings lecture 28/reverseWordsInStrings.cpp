#include<iostream>
#include<stack>
#include<sstream>
using namespace std;

string reverseWords(string &s) {
    stack<string> st;
    stringstream ss(s);
    string word;

    while(ss >> word) {
        st.push(word);
    }

    string result;
    while(!st.empty()) {
        result += st.top();
        st.pop();
        if(!st.empty()) result += " ";
    }

    return result;
}

int main() {
    string s = "the sky is blue";

    cout << reverseWords(s);
    return 0;
}