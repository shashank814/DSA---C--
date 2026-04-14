#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;

    // constructor overloading
    Student() {
        cout << "non-parameterized\n";
    }

    Student(string name) {
        this->name = name;
        cout << "parameterized\n";
    }
};

int main() {
    // Student s1;   // works in the context of non parameterized constructor
    Student s1("tony");
    return 0;
}
