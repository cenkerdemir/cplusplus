//polymorpgism from the advanced c++ course on udemy

#include<iostream>
#include<sstream>
#include<iomanip>
#include<vector>


using namespace std;

// Employee Class
class Employee {
protected:
    string name;
    double pay;
public:
    Employee() {
        name = "";
        pay = 0.00;
    }
    Employee(string empName, double payRate) {
        name = empName;
        pay = payRate;
    }
    
    //destructor
    ~Employee() {
        
    }
    
    string getName() {
        return name;
    }
    void setName(string newName) {
        name = newName;
    }
    double getPay() {
        return pay;
    }
    void setPay(double newPay) {
        pay = newPay;
    }
    string toString() {
        stringstream stm;
        stm << name << ": " << pay;
        return stm.str();
    }
    virtual double grossPay(int hours) {
        return pay * hours;
    }
};

//Manager Class derived from the Employee class
class Manager : public Employee {
private:
    bool salaried;
public:
    //default constructor
    Manager() : salaried(true) {}
    
    Manager(string manName, double payRate, bool isSalaried) : Employee(manName, payRate) {
        salaried = isSalaried;
    }
    
    //destructor
    ~Manager() {
        
    }
    
    bool getSalaried() {
        return salaried;
    }
    string toString() {
        stringstream stm;
        string salary;
        if (salaried) {
            salary = "Salaried";
        }
        else {
            salary = "Hourly";
        }
        stm << name << ": " << pay
        << ": " << salary << endl;
        return stm.str();
    }
    virtual double grossPay(int hours) {
        return (salaried ? pay : (pay * hours));
    }
};


int main() {
    system("clear");
    Employee emp1("Jones", 25.0);
    Manager mgr1("Demir", 1200, true);

    Employee *empPtr;
    empPtr = &emp1;
    cout << "Name: " << empPtr->getName() << endl;
    cout << "Pay: " << empPtr->grossPay(40) << endl;
    
    empPtr = &mgr1;
    cout << "Name: " << empPtr->getName() << endl;
    cout << "Pay: " << empPtr->grossPay(40) << endl;
    
    vector<Employee *> emps;
    emps.push_back(&emp1);
    emps.push_back(&mgr1);
    
    for (int i = 0; i < emps.size(); i++) {
        cout << emps[i]->getName() << ": " << emps[i]->grossPay(40) << endl;
    }
    return 0;
}





























