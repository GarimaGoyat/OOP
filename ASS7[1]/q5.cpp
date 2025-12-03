#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0, int i=0){
        real = r; 
        imag = i;
    }

    // add two complex numbers
    Complex operator+(Complex const &obj){
        return Complex(real + obj.real, imag + obj.imag);
    }

    void show(){
        cout << real << " + i" << imag << endl;
    }
};

int main(){
    Complex c1(2,3), c2(4,5), c3;
    c3 = c1 + c2;
    c3.show();
}
