//  1.	Write a program to pass an object as an argument and return the object from a function.
//  a.	Use pass-by-value
//  b.	Use pass-by-address

#include <iostream>
using namespace std;

class Sample {
    int data;
public:
    void set(int x) { data = x; }
    void show() { cout << "Data = " << data << endl; }

    // (a) Pass by value, return object
    Sample addByValue(Sample s) {
        Sample temp;
        temp.data = data + s.data;
        return temp;
    }

    // (b) Pass by address, return object
    Sample addByAddress(Sample *s) {
        Sample temp;
        temp.data = data + s->data;
        return temp;
    }
};

int main() {
    Sample s1, s2, result1, result2;
    s1.set(10);
    s2.set(20);

    result1 = s1.addByValue(s2);    // pass-by-value
    result2 = s1.addByAddress(&s2); // pass-by-address

    cout << "Pass by Value: ";   result1.show();
    cout << "Pass by Address: "; result2.show();

    return 0;
}
