#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float a){ x = a; }

    // convert object to float
    operator float() {
        return x;
    }
};

int main(){
    Test t(4.8f);
    float a = t;   // object → float
    cout << a;
}
/*
So float a=t; automatically calls:a = t.operator float();
*/
