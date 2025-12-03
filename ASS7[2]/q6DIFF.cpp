#include <iostream>
using namespace std;

class Test {
    int x;
public:
    friend istream& operator>>(istream &in, Test &t);
    friend ostream& operator<<(ostream &out, Test &t);
};

istream& operator>>(istream &in, Test &t) {
    in >> t.x;
    return in;
}

ostream& operator<<(ostream &out, Test &t) {
    out << t.x;
    return out;
}

int main() {
    Test t;
    cin >> t;
    cout << t;
}
