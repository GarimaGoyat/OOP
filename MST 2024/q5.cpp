#include <iostream>

class Number {
private:
    int a, b, c, d;

public:
    // 1. Default constructor for `Number n1;`
    Number() {
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    }

    // 2. Parameterized constructor for `Number n2(10, 20);`
    Number(int val1, int val2) {
        a = val1;
        b = val2;
        c = 0; // Initialize remaining members
        d = 0;
    }

    // 3. Parameterized constructor for `Number n3(30, 40, 50, 60);`
    Number(int val1, int val2, int val3, int val4) {
        a = val1;
        b = val2;
        c = val3;
        d = val4;
    }

    // 4. Copy constructor for `Number n4(n2);` and `Number n5 = n1;`
    Number(const Number &other) {
        std::cout << "(Copy constructor called)" << std::endl;
        a = other.a;
        b = other.b;
        c = other.c;
        d = other.d;
    }
    
    // Public function to display the data
    void showdata() {
        std::cout << "Values are: a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << std::endl;
    }
};

// The exact main() code snippet from the question
int main() {
    Number n1;
    Number n2(10, 20);
    Number n3(30, 40, 50, 60);
    
    std::cout << "For n4: ";
    Number n4(n2);

    std::cout << "For n5: ";
    Number n5 = n1;

    std::cout << "\nDisplaying data for all objects:" << std::endl;
    std::cout << "n1: "; n1.showdata();
    std::cout << "n2: "; n2.showdata();
    std::cout << "n3: "; n3.showdata();
    std::cout << "n4: "; n4.showdata();
    std::cout << "n5: "; n5.showdata();
    
    return 0;
}