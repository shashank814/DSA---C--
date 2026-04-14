#include<iostream>
using namespace std;

class Account {
private:
    string name;
    double balance;

public:
    // Constructor
    Account(string name, double balance) {
        this->name = name;       // important
        this->balance = balance; // important
    }

    void deposit(double amount) {
        this->balance += amount;
    }

    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Balance: " << this->balance << endl;
    }
};

int main() {
    Account a1("Shashank", 1000);
    Account a2("Rahul", 2000);

    a1.deposit(500);
    a2.deposit(1000);

    a1.display();
    cout << endl;
    a2.display();

    return 0;
}