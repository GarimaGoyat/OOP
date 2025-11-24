#include <iostream>
using namespace std;

class Distance {
    int feet, inches;
public:
    Distance(int f=0, int i=0){
        feet = f;
        inches = i;
    }

    // unary minus operator
    Distance operator- () {
        feet = -feet;      // change sign
        inches = -inches;
        return *this;      // return updated object
    }

    void show(){
        cout << feet << " " << inches << endl;
    }
};

int main(){
    Distance d(5, 8);

    -d;      // calls operator-()
    d.show();
}
