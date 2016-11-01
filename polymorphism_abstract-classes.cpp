// polymorphism - abstract classes

#include<iostream>

using namespace std;

//Abstract class of Shape
class Shape {
    virtual void setX(int xcor) = 0;
    virtual void setY(int ycor) = 0;
    virtual int getX() const = 0;
    virtual int getY() const = 0;
    virtual void draw() const = 0;
};

//Derived class of Circle
class Circle : Shape {
    private:
        int x, y, radius;
    public:
        Circle(int xcor, int ycor, int rad) {
            x = xcor;
            y = ycor;
            radius = rad;
        }
        virtual void setX(int xcor) {
            x = xcor;
        }
        virtual void setY(int ycor) {
            y = ycor;
        }
        void setRadius(int rad) {
            radius = rad;
        }
        virtual int getX() const {
            return x;
        }
        virtual int getY() const {
            return y;
        }
        int getRadius() const {
            return radius;
        }
        virtual void draw() const {
            cout << "Drawing a circle at: " << getX() << ", " << getY() << " with the radius of: " << getRadius() << endl;
        }
};

int main() {
    system("clear");
    Circle circle1(2,3,4);
    circle1.draw();
    
    return 0;
}
