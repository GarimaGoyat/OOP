#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a=0) { x = a; }
    void show() { cout << x << endl; }
};

int main() {
    Test t = 5.75f;   // float → object
    t.show();
}
