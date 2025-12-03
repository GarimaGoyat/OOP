#include <iostream>
using namespace std;

class Test {
    int x;
public:
    Test(int a=10){ x = a; }

    // friend function can access private variables
    friend void operator-(Test &t);
};

void operator-(Test &t){
    t.x = -t.x;      // make negative
    cout << t.x << endl;
}

int main(){
    Test x1;
    -x1;   // calls friend operator
}
