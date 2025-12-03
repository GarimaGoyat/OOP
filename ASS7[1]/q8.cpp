#include <iostream>
using namespace std;

class Test {
    float val;
public:
    // constructor used for conversion
    Test(float x){
        val = x;
    }

    void show(){
        cout << val << endl;
    }
};

int main(){
    Test t = 5.5f;   // float → object
    t.show();
}
