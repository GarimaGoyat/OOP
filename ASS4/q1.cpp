#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

class Derived : public Base {
public:
    void show() {
        cout << "Public: " << pub << endl;   // accessible
        cout << "Protected: " << prot << endl; // accessible
        // cout << "Private: " << priv << endl; // Error! not accessible
    }
};

int main() {
    Derived d;
    cout << d.pub << endl;   // OK, public in derived
    // cout << d.prot << endl; // Error! protected not accessible outside
    return 0;
}
