#include <iostream>
using namespace std;

// The common Grandparent class
class A {
public:
    int data_a;
    A() {
        data_a = 100;
        cout << "Constructor A called" << endl;
    }
};

// Parent B inherits 'virtually' from A
class B : virtual public A {
public:
    B() { cout << "Constructor B called" << endl; }
};

// Parent C also inherits 'virtually' from A
class C : virtual public A {
public:
    C() { cout << "Constructor C called" << endl; }
};

// Child D inherits from B and C
class D : public B, public C {
public:
    D() { cout << "Constructor D called" << endl; }
};


int main() {
    cout << "Creating object of class D...\n" << endl;
    D obj; // Create the object

    // Accessing the member of A is now unambiguous
    // because there is only one shared copy of 'data_a'.
    cout << "\nAccessing data from the base class A..." << endl;
    cout << "Value of data_a: " << obj.data_a << endl;

    return 0;
}