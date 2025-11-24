#include <iostream>
using namespace std;

float division(int x, int y){
    if(y == 0)
        throw 0;             // throwing int for demo
    return (x / y);
}

int main(){
    float k = 0;

    try {
        k = division(25, k);   // passing 0 as denominator
        cout << k << endl;
    }
    catch(int e){             // catch int
        cout << "Caught int exception!" << endl;
    }
    catch(const char* msg){   // catch c-string
        cout << msg << endl;
    }
    catch(...){               // default catch
        cout << "Unknown exception caught!" << endl;
    }
}
