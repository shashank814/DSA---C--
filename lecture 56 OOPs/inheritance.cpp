#include<iostream>
#include<string>
using namespace std;

// Parent Class
class Person {
    public:
    string name;
    int age;

    //Paramerized Constructor
    Person(string name, int age) {
        this-> name = name;
        this -> age = age;
    }

    // Simple Constructor
    // Person() {
    //     cout << "Parent Constructor" << endl;
    // }

    ~Person() {
        cout << "Parent Destructor\n";
    }
};

// Child Class
class Student : public Person {
    public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age) {
        this->rollno = rollno;
    }

    // Student() {
    //     cout << "Child Constructor" << endl;
    // }

    ~Student() {
        cout << "Child Destructor\n";
    }

    void getInfo() {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

int main() {
    // Student s1;
    // s1.name = "rahul";
    // s1.age = 21;
    // s1.rollno = 12;

    Student s1("rahul", 21, 12);

    s1.getInfo();
    return 0;
}