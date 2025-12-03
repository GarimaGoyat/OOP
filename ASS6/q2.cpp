#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void area() { }
    virtual void display() { }
};

class Circle : public Shape {
    float r;
public:
    Circle(float rr) { r = rr; }
    void area() {
        cout << "Area = " << 3.14 * r * r << endl;
    }
    void display() {
        cout << "Shape: Circle" << endl;
    }
};

class Rectangle : public Shape {
    float w, h;
public:
    Rectangle(float a, float b) { w = a; h = b; }
    void area() {
        cout << "Area = " << w * h << endl;
    }
    void display() {
        cout << "Shape: Rectangle" << endl;
    }
};

class Triangle : public Shape {
    float b, h;
public:
    Triangle(float x, float y) { b = x; h = y; }
    void area() {
        cout << "Area = " << 0.5 * b * h << endl;
    }
    void display() {
        cout << "Shape: Triangle" << endl;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(4, 6);

    s = &c; s->display(); s->area();
    s = &r; s->display(); s->area();
    s = &t; s->display(); s->area();
}
