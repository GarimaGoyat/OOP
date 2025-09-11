//  Write a C++ program to declare const member function and attempt any operation within it.
#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int val) { x = val; }

    // const member function (cannot modify data members)
    void show() const {
        cout << "x = " << x << endl;

        // x = x + 1;   ❌ not allowed (error if uncommented)
    }
};

int main() {
    Demo d(10);
    d.show();
    return 0;
}
