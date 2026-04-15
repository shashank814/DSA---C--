#include<iostream>
#include<string>
using namespace std;

class Teacher {
    // properties / attributes
    string name;
    string dept;
    string subject;
    double salary;

    // methods / member function
    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1;
    Teacher t2;

    return 0;
}