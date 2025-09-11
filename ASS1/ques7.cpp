#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    void set(int r, int i) { real = r; imag = i; }

    void display() { cout << real << " + " << imag << "i" << endl; }

    Complex sum(Complex c) {
        Complex temp;
        temp.real = real + c.real;            //temp.real = this->real + c.real = 2 + 4 = 6
        temp.imag = imag + c.imag;            //temp.imag = this->imag + c.imag = 3 + 5 = 8
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.set(2, 3);
    c2.set(4, 5);

    c3 = c1.sum(c2);        // c3=sum(&c1,c2);

    cout << "First: ";  c1.display();
    cout << "Second: "; c2.display();
    cout << "Sum: ";    c3.display();
}



















/*#include<bits/stdc++.h>
using namespace std;

class Complex{
private:
    //properties
    double real,imag;
    //methods
public:
    void set(double r,double i){
        real=r;
        imag=i;
    }
    void display(){
        cout<<real<<"+"<<imag<<"i"<<'\n';
    }
    Complex sum(Complex c){
        Complex t;
        t.real=real+c.real;
        t.imag=imag+c.imag;
        return t;
    }
    void displaysum(){
        cout<<real<<"+"<<imag<<"i";
    }
};

int main(){
    Complex c1,c2,c3;
    c1.set(2,3);
    c2.set(4,5);
    c3=c1.sum(c2);
    c1.display();
    c2.display();
    cout<<"=";
    c3.display();
    return 0;
}*/