#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // (a) No-parameter constructor
    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Rectangle created with no parameters." << endl;
    }

    // (b) Two-parameter constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Rectangle created with length = " << length << " and breadth = " << breadth << endl;
    }

    // (c) One-parameter constructor
    Rectangle(int side) {
        length = side;
        breadth = side;
        cout << "Square created with side = " << side << endl;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }

    // Destructor
    ~Rectangle() {
        cout << "Rectangle with length = " << length << " and breadth = " << breadth << " destroyed." << endl;
    }
};

int main() {
    // Array of objects
    Rectangle rects[3] = {
        Rectangle(),       // no-parameter
        Rectangle(5),      // one-parameter
        Rectangle(4, 6)    // two-parameter
    };

    // Calculate and print area of each
    for (int i = 0; i < 3; i++) {
        cout << "Area of Rectangle " << i + 1 << " = " << rects[i].area() << endl;
    }

    return 0;
}
