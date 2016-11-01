//inheritance example 1

#include<iostream>

using namespace std;

//Account class
class Account {
    protected:
        double balance;
    public:
        Account(double bal) {
            if (bal > 0.0) {
                balance = bal;
            }
            else {
                balance = 0.0;
            }
        }
        void credit(double amount) {
            balance += amount;
        }
        void debit(double amount) {
            if (balance >= amount) {
                balance -= amount;
            }
            else {
                cout << "insufficient funds" << endl;
            }
        }
        double getBalance() {
            return balance;
        }
};

//Checking account class
class CheckingAccount : public Account {
    private:
        double fee;
    public:
        CheckingAccount(double bal, double f) : Account(bal) {
            fee = f;
        }
        void debit(double amount) {
            if (balance >= (amount + fee)) {
                balance -= (amount + fee);
            }
            else {
                cout << "insufficient funds" << endl;
            }
        }
};

int main() {
    
    CheckingAccount myAccount(500, 0.5);
    myAccount.credit(100);
    cout << myAccount.getBalance() << endl;
    myAccount.debit(599.5);
    cout << myAccount.getBalance() << endl;
    return 0;
}
