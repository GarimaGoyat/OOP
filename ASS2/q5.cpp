//	Write a program to declare static public member variable, global and local
//  variable with the same name. Initialize and display their contents.
#include <iostream>
using namespace std;

// global variable
int num = 1;

class Demo {
public:
    static int num;  // static class variable
};

// static variable must be defined outside
int Demo::num = 2;

int main() {
    int num = 3;  // local variable

    cout << "Global num = " << ::num << endl;      // global
    cout << "Static num = " << Demo::num << endl;  // static class member
    cout << "Local num = " << num << endl;         // local

    return 0;
}
