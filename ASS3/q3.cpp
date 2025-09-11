#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called ✅" << endl;
    }

    // Destructor → starts with ~ and matches class name
    ~Demo() {
        cout << "Destructor called ✅" << endl;
    }

    // ❌ Not allowed:
    // ~Demo(int x) {}   // ERROR → destructor cannot have parameters
    // ~Demo() {}        // ERROR → only ONE destructor per class
    // int ~Demo() {}    // ERROR → no return type allowed
};

int main() {
    {
        Demo d1;   // object created → constructor runs
    }   // object goes out of scope → destructor automatically runs

    cout << "Back in main()" << endl;

    // Another object
    Demo d2;

    return 0;  // at program end, destructor for d2 is called
}
