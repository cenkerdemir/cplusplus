// templates example 1 - function templates

#include <iostream>

using namespace std;

template <typename T>
bool equals(T value1, T value2) {
    return (value1 == value2) ? true : false;
}

int main()
{
    system("clear");
    
    int a,b;
    a=1, b=2;
    
    if (equals(a,b)) {
        cout << a << " and " << b << " are equal." << endl;
    }
    else {
        cout << a << " and " << b << " are not equal." << endl;
    }
    
    string word1, word2;
    word1 = word2 = "cenker";
    
    if (equals(word1,word2)) {
        cout << word1 << " and " << word2 << " are equal." << endl;
    }
    else {
        cout << word1 << " and " << word2 << " are not equal." << endl;
    }

    return 0;
}
