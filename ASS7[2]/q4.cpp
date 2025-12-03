#include <iostream>
using namespace std;

class SafeArray {
    int arr[5];
public:
    int& operator[](int i) {
        if(i<0 || i>=5) {
            cout << "Index out of bounds!" << endl;
            exit(0);
        }
        return arr[i];
    }
};

int main() {
    SafeArray s;
    s[0] = 10;
    cout << s[0] << endl;
    cout << s[10] << endl;       // error
}
