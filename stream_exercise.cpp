// stream exercise

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    
    ifstream gradeFile;
    stringstream grades;
    int grade;
    int total = 0;
    
    gradeFile.open("/Users/cenkerdemir/Development/cplusplus/grades.txt");
    string line;
    getline(gradeFile, line);
    grades << line;
    gradeFile.close();
    for (int i = 0; i < 5; i++) {
        grades >> grade;
        total += grade;
    }
    double average = total / 5;
    cout << "Average: " << average << endl;
    
    return 0;
}
