#include <iostream>
using namespace std;

class Test {
public:
    void operator()(int a, int b, int c=0) {
        cout << "Values: " << a << " " << b << " " << c << endl;
    }
};

int main() {
    Test t;
    t(10,20);
    t(1,2,3);
}
