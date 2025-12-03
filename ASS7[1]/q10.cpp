#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar {
    float r, angle;
public:
    Polar(float a, float b){ r=a; angle=b; }

    // conversion function to Cartesian
    operator Cartesian();
};

class Cartesian {
    float x, y;
public:
    Cartesian(float a=0, float b=0){ x=a; y=b; }
    void show(){ cout << x << " " << y << endl; }
};

Polar::operator Cartesian(){
    return Cartesian(r * cos(angle), r * sin(angle));
}

int main(){
    Polar p(10,5);
    Cartesian c = p;   // convert
    c.show();
}
