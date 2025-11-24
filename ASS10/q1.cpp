#include <iostream>
using namespace std;

// without exception handling
float division(int x, int y){
    return (x / y);   // y = 0 → crash / garbage output
}

int main(){
    int i = 50, j = 0;
    float k = 0;

    k = division(i, j);   // division by zero
    cout << k << endl;
}
