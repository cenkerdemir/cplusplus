// generic programming

#include<iostream>

using namespace std;

template <typename T>
void display(T numArr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << numArr[i] << " ";
    }
    cout << endl;
}

template <typename Z>
Z maximum(Z &arg1, Z &arg2) {
    if (arg1 > arg2) {
        return arg1;
    } else {
        return arg2;
    }
}

int main()
{
    system("clear");
    
    const int size = 7;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        numbers[i] = i + 1;
    }
    display(numbers, size);
    string names[] = {"cenker", "helen", "demir", "feyhan", "recep", "ozlem", "baris"};
    display(names, size);
    
    
    int one = 1;
    int two = 2;
    cout << maximum(one, two) << endl;
    
    double doub1 = 2.34;
    double doub2 = 5.43;
    cout << maximum(doub1, doub2) << endl;
    
    string cenker = "cenker";
    string demir = "demir";
    cout << maximum(cenker, demir) << endl;

    return 0;
}
