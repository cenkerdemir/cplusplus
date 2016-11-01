// exception handling

#include <iostream>

using namespace std;

const int devideByZero = 1;

int main() {
    system("clear");
    
    try {
        int numer = 12;
        int denom = 0;
        if (denom == 0) {
            throw devideByZero;
        }
        else {
            cout << numer / denom;
    
        }
    }
    catch(int e) {
        if (e == devideByZero) {
            //writing to stdout just for demonstration purposes
            cout << "can't divide by zero" << endl;
        }
    }
    
    return 0;
}
