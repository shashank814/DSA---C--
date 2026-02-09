#include <iostream>
using namespace std;

int main() { 

    cout << "Shashank " << "Singh\n";
    cout << "Roshan\n";

    int age = 25;
    cout << sizeof(age) << endl;
    cout << age << endl;

    char grade = 'A';
    cout << grade << endl;

    float PI = 3.14f;
    cout << PI << endl;

    bool isSafe = false;
    cout << isSafe << endl;

    double price = 100.99;
    cout << price << endl;

    // TYPE CASTING 
    // IMPLICIT 
    char Grade = 'a';
    int val = Grade;
    cout << val << endl;

    // EXPLICIT
    double Price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;


    // TAKING INPUT
    // int age;
    // cout << "Enter the age: " << endl;
    // cin >> age;

    // cout << "Your age is: " << age << endl;

    // ARITHEMETIC OPERATORS
    int a = 5, b = 10;
    cout << "Sum = " << (a + b) << endl;
    cout << "Diff = " << (b - a) << endl;
    cout << "Product = " << (a * b) << endl;
    cout << "Div = " << (b / a) << endl;

    // EXAMPLE QUESTION
    int x , y;
    cout << "Enter x: " << endl;
    cin >> x;

    cout << "Enter y: " << endl;
    cin >> y;

    int sum = x + y;
    cout << sum << endl;


    return 0;
}