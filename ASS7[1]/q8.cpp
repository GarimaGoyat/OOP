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
    Test t = 5.5f;   // float → object  //  “5.5f is a float, but I need a Test object.”
    t.show();                           //  So the compiler automatically calls your constructor
}

/*
it fills the object’s variable:
Stores the float in val
Creates a Test object using that value
*/
