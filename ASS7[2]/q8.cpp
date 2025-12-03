#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a=0) { x = a; }

    operator float() {
        return x;
    }
};

int main() {
    Test t(9.5);
    float f = t;      // object → float
    cout << f;
}
