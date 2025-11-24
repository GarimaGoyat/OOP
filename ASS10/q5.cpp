#include <iostream>
using namespace std;

int main(){
    try {
        // try any one:
        // throw 10;               // int
        // throw 'A';              // char
        // throw 3.14;             // double
        // throw "Hello";          // char array
        throw string("Error!");    // string object
    }
    catch(int x){
        cout << "Caught int: " << x << endl;
    }
    catch(char c){
        cout << "Caught char: " << c << endl;
    }
    catch(double d){
        cout << "Caught double: " << d << endl;
    }
    catch(const char* s){
        cout << "Caught char array: " << s << endl;
    }
    catch(string &s){
        cout << "Caught string: " << s << endl;
    }
}
