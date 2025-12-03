#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar {
    float r, th;
public:
    Polar(float a=0, float b=0) : r(a), th(b) {}
    friend class Cartesian;
};

class Cartesian {
    float x, y;
public:
    Cartesian(float xx=0, float yy=0) : x(xx), y(yy) {}

    Cartesian(Polar p) {      // conversion
        x = p.r * cos(p.th);
        y = p.r * sin(p.th);
    }

    void show() { cout << x << " " << y << endl; }
};

int main() {
    Polar p(10, 0.5);
    Cartesian c = p;  
    c.show();
}
