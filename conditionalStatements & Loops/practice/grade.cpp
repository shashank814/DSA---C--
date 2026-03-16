#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    cout << "enter marks : " << endl;
    cin >> num1 >> num2 >> num3 >> num4 >> num5; 

    int sum = num1 + num2 + num3 + num4 + num5;
    float average = sum / 5.0;

    if(average >= 90) {
        cout << "Grade A" << endl;
    } else if(average >=80) {
        cout << "Grade B" << endl;
    } else {
        cout << "Grade C";
    }
    return 0;

}