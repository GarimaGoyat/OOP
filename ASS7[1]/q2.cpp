#include <iostream>
using namespace std;

class Distance {
    int x, y;   // two distance values
public:
    Distance(int a=0, int b=0){
        x = a; 
        y = b;
    }

    // overloaded + operator to add two objects
    Distance operator+(Distance &d){
        // return new object with sum of x and y
        return Distance(x + d.x, y + d.y);
    }

    void show(){
        cout << x << " " << y << endl;
    }
};

int main() {
    Distance d1(2, 3), d2(4, 5), d3;

    d3 = d1 + d2;   // calls operator+
    d3.show();
}
