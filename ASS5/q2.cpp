#include <iostream>
#include <cstring> // Required for strcpy and strcat functions

using namespace std;

// Base Class X
class X {
protected: // Using protected so the derived class Z can access x_str
    char x_str[50];

public:
    // Constructor for X initializes its string
    X(const char* s) {
        strcpy(x_str, s);
        cout << "Class X constructor called. Initialized with: " << x_str << endl;
    }

    // Destructor for X
    ~X() {
        cout << "Class X destructor called." << endl;
    }
};

// Base Class Y
class Y {
protected: // Using protected so the derived class Z can access y_str
    char y_str[50];

public:
    // Constructor for Y initializes its string
    Y(const char* s) {
        strcpy(y_str, s);
        cout << "Class Y constructor called. Initialized with: " << y_str << endl;
    }

    // Destructor for Y
    ~Y() {
        cout << "Class Y destructor called." << endl;
    }
};

// Derived Class Z from X and Y
class Z : public X, public Y {
private:
    char z_str[100]; // Larger array to hold the concatenated string

public:
    // Constructor for Z calls base constructors and then concatenates the strings
    Z(const char* s1, const char* s2) : X(s1), Y(s2) {
        // 1. Copy string from class X into Z's string
        strcpy(z_str, x_str);
        // 2. Concatenate (join) string from class Y onto Z's string
        strcat(z_str, y_str);
        cout << "Class Z constructor called. Concatenation is complete." << endl;
    }

    // Function to display all three strings
    void display() {
        cout << "\n--- Displaying Strings ---" << endl;
        cout << "String from X: " << x_str << endl;
        cout << "String from Y: " << y_str << endl;
        cout << "Concatenated String in Z: " << z_str << endl;
        cout << "--------------------------\n" << endl;
    }

    // Destructor for Z
    ~Z() {
        cout << "Class Z destructor called." << endl;
    }
};

// Main function
int main() {
    // Create an object of class Z, passing two strings to its constructor
    Z z_obj("Welcome to ", "Object Oriented Programming!");

    // Display the results
    z_obj.display();

    return 0; // z_obj goes out of scope here, so destructors are called
}