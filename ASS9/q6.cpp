#include <iostream>
using namespace std;

template <class T>
class MyClass {
    T value;
public:
    MyClass(T v);     // constructor declaration
    void divideBy2(); // function declaration
};

// constructor definition
template <class T>
MyClass<T>::MyClass(T v){
    value = v;
}

// function definition
template <class T>
void MyClass<T>::divideBy2(){
    cout << value / 2 << endl;
}

int main(){
    MyClass<double> a(12.8);
    MyClass<int> b(50);

    a.divideBy2();
    b.divideBy2();
}
