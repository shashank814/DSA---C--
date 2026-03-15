#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int st=0; st<n; st++) {
        for(int end=st; end<n; end++) {
            for(int i=0; i<=end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}