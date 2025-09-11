//   Write a program using Array of Objects to display area of multiple rectangles.
#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    void set(int l, int b) { length = l; breadth = b; }
    int area() { return length * breadth; }
};

int main() {
    int n;
    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle rect[50];  // array of objects (max 50)

    for (int i = 0; i < n; i++) {
        int l, b;
        cout << "Enter length and breadth of rectangle " << i+1 << ": ";
        cin >> l >> b;
        rect[i].set(l, b);
    }

    cout << "\nAreas of Rectangles:\n";
    for (int i = 0; i < n; i++) {
        cout << "Rectangle " << i+1 << " Area = " << rect[i].area() << endl;
    }

    return 0;
}
