//    Implement static member function using a C++ program.
#include <iostream>
using namespace std;

class Demo {
    static int count;   // static data member
public:
    static void show() {   // static member function
        cout << "Count = " << count << endl;
    }
};

// define static data member outside
int Demo::count = 5;

int main() {
    Demo::show();   // call static function using class name
    return 0;
}
