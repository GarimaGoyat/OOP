#include <iostream>
#include <cmath>
using namespace std;

// Right angled triangle (base, height)
float area(float b, float h) {
    return 0.5 * b * h;
}

// Equilateral triangle (side)
float area(int side) {
    return (sqrt(3) / 4) * side * side;
}

// Isosceles triangle (two equal sides, base)
float area(float equal, int base) {
    float h = sqrt(equal*equal - (base*base)/4.0);
    return 0.5 * base * h;
}

int main() {
    cout << "Right Angle Triangle: " << area(6.0f, 4.0f) << endl;
    cout << "Equilateral Triangle: " << area(5) << endl;
    cout << "Isosceles Triangle : " << area(5.0f, 6) << endl;
}
