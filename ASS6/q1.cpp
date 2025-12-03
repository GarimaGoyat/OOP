#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
    virtual void calculate_area() { }  // virtual function
};

class Rectangle : public Polygon {
public:
    void calculate_area() {
        cout << "Rectangle Area = " << width * height << endl;
    }
};

class Triangle : public Polygon {
public:
    void calculate_area() {
        cout << "Triangle Area = " << (width * height) / 2.0 << endl;
    }
};

int main() {
    Polygon *p;    // base class pointer
    Rectangle r;
    Triangle t;

    p = &r;
    p->set_value(10, 5);
    p->calculate_area();

    p = &t;
    p->set_value(10, 5);
    p->calculate_area();
}
