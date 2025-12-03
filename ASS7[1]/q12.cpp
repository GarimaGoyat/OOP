#include <iostream>
using namespace std;

class Test {
public:
    void operator()(int a, int b){
        cout << "Sum = " << a + b;
    }
};

int main(){
    Test t;
    t(3,4);   // behaves like a function
}
