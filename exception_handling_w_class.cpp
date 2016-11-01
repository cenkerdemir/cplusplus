// exception handling with class

#include <iostream>
#include <stdexcept>

using namespace std;

class DevideByZero : public runtime_error {
    public:
    DevideByZero() : runtime_error("Devide by zero exception") {};
};


double quotient(double numer, double denom) {
    if (denom == 0) {
        throw DevideByZero();
    }
    else {
        return numer / denom;
    }
}
    
int main() {
    system("clear");
    
    double number1, number2, ratio;
    
    cout << "enter a numerator: " ;
    cin >> number1;
    cout << "enter a denominator: ";
    cin >> number2;
    
    try {
        ratio = quotient(number1, number2);
        cout << "Result: " << ratio << endl;
    }
    catch(DevideByZero &except) {
        cout << except.what() << endl;
    }
    //below is to catch all (other) exceptions
    catch(...){
        cout << "Exception thrown and caught" << endl;
    }
    
    return 0;
}
