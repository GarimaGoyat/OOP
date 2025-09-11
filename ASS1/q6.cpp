#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunction() {
        cout << "This is a private function." << endl;
    }

public:
    void publicFunction() {
        cout << "This is a public function." << endl;
        // calling private function inside public function
        privateFunction();
    }
};

int main() {
    Demo obj;
    obj.publicFunction(); // only public function can be called directly
    return 0;
}
