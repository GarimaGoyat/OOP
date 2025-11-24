#include <iostream>
using namespace std;

// template version
template <class T1, class T2>
void show(T1 x, T2 y){
    cout << "Template: " << x << " , " << y << endl;
}

// overloaded version for int,int
void show(int x, int y){
    cout << "Overloaded normal function (int,int): "
         << x << " , " << y << endl;
}

int main(){
    show(100, "hello hello"); // calls template
    show(3, 3);               // calls overloaded int,int
}
