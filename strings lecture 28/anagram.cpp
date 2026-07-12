#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string &s, string &t) {
    if(s.length() != t.length()) return false;

    vector<int> freq(26, 0);

    // Count characters of s
    for(char ch : s) {
        freq[ch - 'a']++;
    }

    // Subtract using t
    for(char ch : t) {
        if(freq[ch - 'a'] == 0) {
            return false;
        }
        freq[ch - 'a']--;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    cout << isAnagram(s, t);

    return 0;
}