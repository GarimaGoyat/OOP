#include <iostream>
#include <string>

using namespace std;

// 1. Abstract Base Class
// This class is abstract because it has at least one pure virtual function.
// We cannot create an object of this class.
class Student {
protected:
    string name;
    int rollNo;

public:
    // Constructor to initialize common properties
    Student(string n, int r) : name(n), rollNo(r) {}

    // Pure Virtual Function:
    // A function that has no implementation in the base class.
    // Any class that inherits from Student MUST provide its own version of this function.
    virtual void displayDetails() = 0;

    // Virtual destructor (good practice for base classes with virtual functions)
    virtual ~Student() {}
};


// 2. Derived Concrete Class for Science students
class Science : public Student {
private:
    int practical_marks;

public:
    // Constructor calls the base class constructor
    Science(string n, int r, int p_marks) : Student(n, r), practical_marks(p_marks) {}

    // Providing the implementation for the pure virtual function
    void displayDetails() override {
        cout << "--- Science Student ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Practical Marks: " << practical_marks << endl;
        cout << "-----------------------" << endl << endl;
    }
};

// 3. Derived Concrete Class for Art students
class Art : public Student {
private:
    int project_score;

public:
    // Constructor calls the base class constructor
    Art(string n, int r, int p_score) : Student(n, r), project_score(p_score) {}

    // Providing the implementation for the pure virtual function
    void displayDetails() override {
        cout << "---- Art Student ----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Project Score: " << project_score << endl;
        cout << "---------------------" << endl << endl;
    }
};

// 4. Derived Concrete Class for Commerce students
class Commerce : public Student {
private:
    int accountancy_marks;

public:
    // Constructor calls the base class constructor
    Commerce(string n, int r, int a_marks) : Student(n, r), accountancy_marks(a_marks) {}

    // Providing the implementation for the pure virtual function
    void displayDetails() override {
        cout << "-- Commerce Student --" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Accountancy Marks: " << accountancy_marks << endl;
        cout << "----------------------" << endl << endl;
    }
};


int main() {
    // 5. Create an array of pointers of the base class type (Student)
    // This array can point to objects of any class derived from Student.
    Student* students[3];

    // Create objects of derived classes and store their addresses in the array
    students[0] = new Science("Alice", 101, 95);
    students[1] = new Art("Bob", 102, 88);
    students[2] = new Commerce("Charlie", 103, 92);

    cout << "Processing student details using base class pointers:\n" << endl;

    // 6. Loop through the array and call the display function
    // This demonstrates runtime polymorphism. The correct version of displayDetails()
    // is called depending on the actual object the pointer points to.
    for (int i = 0; i < 3; i++) {
        students[i]->displayDetails();
    }

    // Clean up the dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

    return 0;
}