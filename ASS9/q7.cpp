#include <iostream>
using namespace std;

template <class T, int size>
class Array {
    T arr[size];   // size is a non-type parameter
public:
    void input(){
        for(int i=0; i<size; i++)
            cin >> arr[i];
    }
    void show(){
        for(int i=0; i<size; i++)
            cout << arr[i] << " ";
    }
};

int main(){
    Array<int, 5> A;   // size = 5
    A.input();
    A.show();
}
