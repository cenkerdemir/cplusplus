// abstract classes example 2

#include<iostream>

using namespace std;

class Animal {
    public:
        virtual void talk() = 0;
};

class Dog : public Animal {
    public:
        virtual void talk() {
            cout << "woof woof!..." << endl;
        }
};

class Cat : public Animal {
    public:
        virtual void talk() {
            cout << "maew maew...." << endl;
        }
};

int main() {
    Dog lassie;
    Cat minnie;
    
    lassie.talk();
    minnie.talk();
    
    return 0;
}
