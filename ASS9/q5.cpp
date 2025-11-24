#include <iostream>
using namespace std;

template <class T>
class MyClass {
    T value;   // generic number
public:
    MyClass(T v){ value = v; }

    void divideBy2(){
        cout << value / 2 << endl;
    }
};

int main(){
    MyClass<int> a(10);
    MyClass<float> b(5.6);

    a.divideBy2();
    b.divideBy2();
}
