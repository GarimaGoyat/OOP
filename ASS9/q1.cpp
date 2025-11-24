#include <iostream>
using namespace std;

// function template
template <class T>
T MyMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){
    cout << MyMax(5, 9) << endl;         // int
    cout << MyMax(5.6, 2.1) << endl;     // double
    cout << MyMax('a', 'z') << endl;     // char
}
