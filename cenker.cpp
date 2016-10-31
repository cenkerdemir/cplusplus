// code to practice for the advanced c++ udemy course

#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

// Employee Class
class Employee {
    private:
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
};

//Manager Class
class Manager : public Employee {
    private:
        bool salaried;
    public:
        Manager(string manName, double payRate, bool isSalaried) : Employee(manName, payRate) {
                salaried = isSalaried;
        }
    bool getSalaried() {
        return salaried;
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
    
    cout << "Manager name: " << man1.getName() << endl;
    cout << "Manager pay: " << man1.getPay() << endl;
    cout << "Salaried?: " << man1.getSalaried() << endl;
    
    return 0;
}

