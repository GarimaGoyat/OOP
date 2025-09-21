//	Write a program to swap private values of two classes using a friend function.
#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
private:
    int valueA;
public:
    A(int v) : valueA(v) {}  // Constructor to initialize value

    // Declare friend function
    friend void swapValues(A &a, B &b);

    void display() {
        cout << "Value of A: " << valueA << endl;
    }
};

class B {
private:
    int valueB;
public:
    B(int v) : valueB(v) {}

    // Declare friend function
    friend void swapValues(A &a, B &b);

    void display() {
        cout << "Value of B: " << valueB << endl;
    }
};

// Friend function to swap private members
void swapValues(A &a, B &b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    A objA(10);
    B objB(20);

    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    swapValues(objA, objB);

    cout << "\nAfter swapping:" << endl;
    objA.display();
    objB.display();
    //  cout<<objA.valueA<<" "<<objB.valueB; -> can do this if valueA and valueB are public

    return 0;
}
