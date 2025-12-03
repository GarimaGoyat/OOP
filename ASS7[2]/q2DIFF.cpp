#include <iostream>
#include <string>
using namespace std;

class STRING {
    string s;
public:
    STRING(string x="") { s = x; }

    bool operator==(STRING &t) {
        return s == t.s;
    }

    STRING operator+(STRING &t) {
        return STRING(s + t.s);
    }

    void show() { cout << s << endl; }
};

int main() {
    STRING a("Garima"), b("Garima"), c("Goyat");
    cout << (a == b) << endl;   // 1
    STRING d = a + c;
    d.show();                    // GarimaGoyat
}
