#include<iostream>
#include<string>
using namespace std;

class Teacher {
    private:
       double salary = 25000;

    public:
       string name;
       string dept;
       string subject;

       void changeDept(string newDept) {
        dept = newDept;
       }

       void setSalary(double s) {
        salary = s;
       }

       double getSalary() {
        return salary;
       }
};

int main() {
    Teacher t1;
    t1.name = "Shashank";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(250000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;
    return 0;
}