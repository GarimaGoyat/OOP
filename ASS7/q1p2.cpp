#include <iostream>
using namespace std;

class MyClass {
    int x;
public:
    MyClass(int a=0){ x = a; }

    // postfix ++ : int dummy argument
    MyClass operator++(int){
        MyClass temp = *this;  // store old value
        x++;                   // increment current value
        return temp;           // return old copy
    }

    void show(){
        cout << x << endl;
    }
};

int main() {
    MyClass obj1(5), obj2;

    obj2 = obj1++;   // returns old value of obj1
    obj1.show();     // 6
    obj2.show();     // 5
}
