#include<iostream>
#include<string>
using namespace std;

class Person {
    public:
    string name;
    int age;
};

class Student : public Person {
    public:
    int rollno;
};

// multiple inheritance
class Teacher : public Person{
    public:
    string subject;
};

int main() {

    // object for student
    Student s1;
    s1.name = "rahul";
    s1.rollno = 21;

    // object for teacher
    Teacher t1;
    t1.name = "raj";
    t1.subject = "physics";

    cout << s1.name << endl;
    cout << s1.rollno << endl;
    cout << t1.name << endl;
    cout << t1.subject << endl;
    return 0;
}