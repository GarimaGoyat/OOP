#include <iostream>
using namespace std;

// template with two parameters
template <class T1, class T2>
void show(T1 x, T2 y){
    cout << x << "  " << y << endl;
}

int main(){
    show(100, "hello hello");
    show('k', 1500);
    show(1.23, 2987);
}
/*
#include <iostream>
using namespace std;

template <class T1, class T2>
pair<T1, T2> show(T1 x, T2 y){
    return make_pair(x, y);
}

int main(){
    auto p = show(100, "hello");

    cout << p.first << "  " << p.second << endl;
}
*/