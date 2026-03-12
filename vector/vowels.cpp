#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int vowel(vector<string> vec, char ch) {
    bool isVowel = false;
    cout << "Enter a character: ";
    cin >> ch;
    for(int i=0; i<vec.size(); i++) {
        if(ch == vec[i][0]) {
                isVowel = true;
        }
    }  
    if(isVowel) {
        cout << ch << " is an vowel" << endl;
    } else {
        cout << ch << " is not a vowel" << endl;
    }
    return 0;
} 

int main() { 
    vector<string> vec = {"a","e","i","o","u","A","E","I","O","U"};
    char ch;
    vowel(vec, ch);
    
    return 0;
} 

   