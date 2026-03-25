#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseString(vector<char> &str) {
    int st = 0, end = str.size()-1;

    while(st < end) {
        swap(str[st++], str[end--]);
    }
}
int main() {
    vector<char> str = {'h','e','l','l','o'};
    
    reverseString(str);
    for(char ch : str) {
        cout << ch << " ";
    }

    return 0;
}