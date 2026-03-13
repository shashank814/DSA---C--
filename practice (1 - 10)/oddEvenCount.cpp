#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,4,5,6};
    int oddCount = 0;
    int evenCount = 0;
    for(int i=0; i<vec.size(); i++) {
        if(i%2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "oddCount : " << oddCount << endl;
    cout << "evenCount : " << evenCount << endl;

    return 0;
}