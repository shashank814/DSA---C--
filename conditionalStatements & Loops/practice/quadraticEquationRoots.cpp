#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter a, b, c : ";
    cin >> a >> b >> c;

    float D = b*b - 4*a*c;

    if(D>0) {
        float root1 = (-b + sqrt(D)) / (2*a);
        float root2 = (-b - sqrt(D)) / (2*a);

        cout << "Roots are real and different \n";
        cout << "Root1 = " << root1 << endl;
        cout << "Rppt2 = " << root2 << endl;
    } else if(D == 0) {
        float root = -b / (2*a);
        cout << "Roots are real and equal \n";
    } else {
        cout << "Roots are complex (imaginary)";
    }
    return 0;
}