#include <iostream>
using namespace std;

class Array {
    int a[5];
public:
    int& operator[](int i){
        if(i<0 || i>=5){
            cout << "Index out of bounds\n";
            exit(0);
        }
        return a[i];
    }
};

int main(){
    Array arr;
    arr[2] = 10;   // valid     //  C++ translates it into: arr.operator = 10;
    cout << arr[2];
}
