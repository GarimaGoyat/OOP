#include <iostream>
using namespace std;

// Base class
class Number {
protected:
    int num;
public:
    void setNumber(int n) {
        num = n;
    }
};

// First derived class to calculate square
class Square : public Number {
public:
    void displaySquare() {
        cout << "Square of " << num << " = " << num * num << endl;
    }
};

// Second derived class to calculate cube
class Cube : public Number {
public:
    void displayCube() {
        cout << "Cube of " << num << " = " << num * num * num << endl;
    }
};

int main() {
    Square s;
    Cube c;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    s.setNumber(n); // set number in Square object
    c.setNumber(n); // set number in Cube object

    s.displaySquare(); // display square
    c.displayCube();   // display cube

    return 0;
}
