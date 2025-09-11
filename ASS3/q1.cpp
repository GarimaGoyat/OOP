#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // (a) No-parameter constructor
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // (b) Two-parameter constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // (c) One-parameter constructor
    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }
};

int main() {
    // Object with no parameters
    Rectangle r1;
    cout << "Area with no parameters: " << r1.area() << endl;

    // Object with one parameter
    Rectangle r2(5);
    cout << "Area with one parameter: " << r2.area() << endl;

    // Object with two parameters
    Rectangle r3(4, 6);
    cout << "Area with two parameters: " << r3.area() << endl;

    return 0;
}
