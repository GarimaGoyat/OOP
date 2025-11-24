#include <iostream>
using namespace std;

float division(int x, int y){
    if(y == 0)
        throw "Custom msg - divide by zero!"; // throwing string literal
    return (x / y);
}

int main(){
    int i = 25, j = 0;
    float k = 0;

    try {
        k = division(i, j);
        cout << k << endl;
    }
    catch(const char* e){     // catching thrown message
        cout << e << endl;
    }
}
