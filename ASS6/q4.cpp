#include <iostream>
using namespace std;

class Student {
public:
    virtual void show() = 0;   // pure virtual → abstract class
};

class Engineering : public Student {
public:
    void show() {
        cout << "Engineering Student" << endl;
    }
};

class Medicine : public Student {
public:
    void show() {
        cout << "Medicine Student" << endl;
    }
};

class Science : public Student {
public:
    void show() {
        cout << "Science Student" << endl;
    }
};

int main() {
    Student *s[3];

    s[0] = new Engineering();
    s[1] = new Medicine();
    s[2] = new Science();

    for(int i = 0; i < 3; i++)
        s[i]->show();
}
