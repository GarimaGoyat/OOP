#include <iostream>
using namespace std;

class MyClass {
    int x;     // private data
public:
    MyClass(int a){ x = a; }

    // prefix ++ : no return type
    void operator++() {
        x++;   // just increment
    }

    void show(){
        cout << x << endl;
    }
};

int main() {
    MyClass obj(5);

    ++obj;     // calls operator++()
    obj.show();  
    return 0;
}
