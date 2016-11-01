// function templates with multiple data types

#include<iostream>

using namespace std;

template <typename T, typename U>
T max(T arg1, U arg2) {
    return (arg1 > arg2) ? arg1 : arg2;
}

int main() {
    double num1 = 23.43;
    int num2 = 12;
    
    cout << max(num1, num2) << endl;
    
    return 0;
}
