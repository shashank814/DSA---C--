#include<iostream>
#include<vector>
using namespace std;

void isValid(vector<vector<int>> &maze, vector<int> &ans, string s, int r, int c) {
    
}

vector<string> ratInMaze(vector<vector<int>> &maze) {
    vector<int> ans;
    string s;
    int r = 0, c = 0;
    
    isValid(maze, ans, s, 0, 0);

    isValid(maze, ans, s, r, c+1);
    
}

int main() {
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    return 0;
}