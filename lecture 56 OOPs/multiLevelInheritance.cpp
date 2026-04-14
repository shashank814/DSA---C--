#include<iostream>
#include<string>
using namespace std;

// Parent Class
class Person {
    public:
    string name;
    int age;
};

// Child Class
class Student : public Person {
    public:
    int rollno;
};

class GradStudent : public Student {
    public:
    string researchArea;
};

int main() {
    GradStudent s1;
    s1.name = "tony";
    s1.researchArea = "physics";

    cout << s1.name << endl;
    cout << s1.researchArea << endl;
    return 0;
}