/*
3.	Create code snippets that illustrates the use of scope resolution operator (: :) for the following uses:
a.	Member functions defined outside class
b.	To access a global variable when there is a local variable with same name
c.	To access a class’s static variables
d.	Including in-built libraries   */

#include <iostream>
using namespace std;

int x = 100; // global variable

class Demo {
    int a;
public:
    static int count;          // (c) static variable
    void set(int val);         // (a) function prototype
    void show();
};

// (a) Defining member function outside class
void Demo::set(int val) { a = val; }
void Demo::show() { cout << "a = " << a << endl; }

// (c) Defining static variable outside class
int Demo::count = 0;

int main() {
    // (b) Global vs Local variable
    int x = 50; 
    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x << endl; // scope resolution for global

    // (a) Using functions defined outside class
    Demo d;
    d.set(10);
    d.show();

    // (c) Access static variable with scope resolution
    Demo::count = 5;
    cout << "Static count = " << Demo::count << endl;

    // (d) Including in-built library
    // already done at top:  #include <iostream>
    cout << "Library included with :: operator in <iostream>" << endl;

    return 0;
}
