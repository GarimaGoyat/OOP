//	Write a program to add data objects of two different classes using friend functions.
#include <iostream>
using namespace std;

class B; // forward declaration

class A {
    int value;
public:
    A(int v) : value(v) {}
    friend int addValues(A, B); // friend function declaration
};

class B {
    int value;
public:
    B(int v) : value(v) {}
    friend int addValues(A, B); // friend function declaration
};

// Friend function to add values of A and B
int addValues(A x, B y) {
    return x.value + y.value;
}

int main() {
    A obj1(10);
    B obj2(20);

    cout << "Sum of values = " << addValues(obj1, obj2) << endl;

    return 0;
}
