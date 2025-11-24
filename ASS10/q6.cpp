#include <iostream>
using namespace std;

// this function can only throw int
void test() throw(int) {
    throw 5;   // valid
    // throw 3.14;  // NOT allowed (but modern compilers ignore this)
}

int main(){
    try {
        test();
    }
    catch(int x){
        cout << "Caught int: " << x << endl;
    }
}
