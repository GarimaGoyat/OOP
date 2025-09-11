#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Constructor
    Student(int r, string n) {
        // 'this' pointer refers to current object
        this->roll = r;    
        this->name = n;
    }

    // Member function
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    // (a) Normal object
    Student s1(101, "Garima");

    // (b) Pointer to object
    Student *ptr = &s1;

    // Using dot operator on object
    s1.display();

    // Using arrow operator on pointer
    ptr->display();

    // Another object using pointer with 'new'
    Student *s2 = new Student(102, "Riya");
    s2->display();

    delete s2; // free memory
    return 0;
}
