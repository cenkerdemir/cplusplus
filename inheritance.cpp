// code to practice for the advanced c++ udemy course

#include<iostream>
#include<sstream>
#include<iomanip>

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
        double grossPay(int hours) {
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
        double grossPay(int hours) {
            return (salaried ? pay : (pay * hours));
        }
};


//MAIN FUNCTION
int main()
{
    cout << setprecision(2) << fixed;
    system("clear");
    Employee emp1("Cenker Demir", 25.32);
    Manager man1("Helen Demir", 25000.00, true);
    
    cout << "Employee name: " << emp1.getName() << endl;
    cout << "Employee pay rate: " << emp1.getPay() << endl;
    cout << "Employee gross pay: " << emp1.grossPay(42) << endl;
    
    cout << man1.toString();
    cout << man1.getName() << "'s gross pay: " << man1.grossPay(60) << endl;
    
    return 0;
}

