//generic classes

#include<iostream>

using namespace std;

//generic Stack class
template <typename T>
class Stack {
    private:
        T datastore[100];
        int top;
    public:
        Stack(){
            top = -1;
        }
        void push(T val) {
            top++;
            datastore[top] = val;
        }
        T pop() {
            T retVal = datastore[top];
            datastore[top] = 0;
            top--;
            return retVal;
        }
        T peek(){
            return datastore[top];
        }
};

//specialized string Stack class
template<>
class Stack<string> {
private:
    string datastore[100];
    int top;
public:
    Stack(){
        top = -1;
    }
    void push(string val) {
        top++;
        datastore[top] = val;
    }
    string pop() {
        string retVal = datastore[top];
        datastore[top] = "";
        top--;
        return retVal;
    }
    string peek(){
        return datastore[top];
    }
};

//MAIN function
int main() {
    system("clear");
    
    Stack<string> stackStr;
    stackStr.push("cenker");
    stackStr.push("helen");
    cout << stackStr.peek() << " is at the top" << endl;
    string value = stackStr.pop();
    cout << value << " was popped off the stack" << endl;
    cout << "now " << stackStr.peek() << " is at the top" << endl;
    
    Stack<double> doubNums;
    doubNums.push(23.54);
    doubNums.push(13.51);
    doubNums.push(22.93);
    doubNums.push(3.47);
    
    cout << doubNums.peek() << endl;
    doubNums.pop();
    cout << doubNums.peek() << endl;
    doubNums.pop();
    cout << doubNums.peek() << endl;
    doubNums.pop();
    cout << doubNums.peek() << endl;
    
    return 0;
}
