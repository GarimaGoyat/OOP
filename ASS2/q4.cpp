//	Write a program to define function cube() as inline for calculating cube of a number.
#include <iostream>
using namespace std;

// inline function
class Math {
public:
    inline int cube(int n) { return n * n * n; }
};

int main() {
    Math m;
    cout << "Cube of 3 = " << m.cube(3);
    return 0;
}
