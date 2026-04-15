#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string name;
    string dept;
    double fee;

    // 1. Default Constructor
    Student() {
        name = "Default Name";
        dept = "Default Dept";
        fee = 0;
    }

    // 2. Parameterized Constructor
    Student(string n, string d, double f) {
        name = n;
        dept = d;
        fee = f;
    }

    // 3. Copy Constructor
    Student(Student &obj) {
        name = obj.name;
        dept = obj.dept;
        fee = obj.fee;
    }
};

int main() {

    // Default Constructor
    Student s1;
    cout << "Default Constructor:\n";
    cout << s1.name << " " << s1.dept << " " << s1.fee << endl;

    cout << endl;

    // Parameterized Constructor
    Student s2("Shashank", "CSE", 25000);
    cout << "Parameterized Constructor:\n";
    cout << s2.name << " " << s2.dept << " " << s2.fee << endl;

    cout << endl;

    // Copy Constructor
    Student s3 = s2;
    cout << "Copy Constructor:\n";
    cout << s3.name << " " << s3.dept << " " << s3.fee << endl;

    return 0;
}