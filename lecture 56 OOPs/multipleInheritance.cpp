#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;
    int rollno;
};

class Teacher {
    public:
    string subject;
    double salary;
};

// multiple inheritance
class TA : public Student, public Teacher {

};

int main() {
    TA t1;
    t1.name = "tony";
    t1.subject = "physics";
    t1.salary = 2500;

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.salary << endl;
    return 0;
}