//	Write a program to demonstrate the working of friend class.
#include <iostream>
using namespace std;

// Forward declaration
class B;  

class A {
private:
    int value;
public:
    A() { value = 10; }  // Constructor to initialize value

    // Declare class B as a friend
    friend class B;
};

class B {
public:
    void showValue(A &a) {
        // Accessing private member of class A
        cout << "Value of A's private member: " << a.value << endl;
    }
};

int main() {
    A objA;
    B objB;

    objB.showValue(objA);  // B can access A's private member

    return 0;
}
