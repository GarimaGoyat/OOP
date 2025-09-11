#include <iostream>
using namespace std;

namespace A {
    int value = 10;
    void show() { cout << "Namespace A value = " << value << endl; }
}

namespace B {
    int value = 20;
    void show() { cout << "Namespace B value = " << value << endl; }
}

int main() {
    A::show();          // calls function in namespace A
    B::show();          // calls function in namespace B

    cout << "A::value = " << A::value << endl;
    cout << "B::value = " << B::value << endl;

    return 0;
}

