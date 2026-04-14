#include<iostream>
using namespace std;

class Student {
public:
    int *marks;

    Student(int m) {
        marks = new int(m);
    }
};

int main() {
    Student s1(90);
    Student s2 = s1;  // Shallow copy

    *s2.marks = 50;

    cout << *s1.marks; // Output: 50 (changed!)
}