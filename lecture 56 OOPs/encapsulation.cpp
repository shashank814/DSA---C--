#include<iostream>
#include<string>
using namespace std;

class Account {
private:
    double balance;
    string password;

public:
    string accountId;
    string username;

    // setter for balance
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }

    void setPassword(string p) {
        password = p;
    }
};

int main() {
    Account acc;

    acc.username = "Shashank";
    acc.accountId = "12345";

    acc.setBalance(1000);

    cout << acc.getBalance();  // ✅ allowed

    return 0;
}