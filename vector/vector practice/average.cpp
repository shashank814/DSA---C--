#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    int sum = 0;
    for(int i=0; i<vec.size(); i++) {
        sum = sum + vec[i];
    }
    double average = (double)sum / vec.size();
    cout << average << endl;
    return 0;
}