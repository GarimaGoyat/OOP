#include <iostream>
using namespace std;

// First Base Class
class Alpha {
private:
    int alpha_data; // Private data member for Alpha

public:
    // Constructor for Alpha
    Alpha(int a) {
        alpha_data = a;
        cout << "Constructor for Alpha is called." << endl;
    }

    // Function to display Alpha's data
    void display_alpha() {
        cout << "Data from Alpha class: " << alpha_data << endl;
    }

    // Destructor for Alpha
    ~Alpha() {
        cout << "Destructor for Alpha is called." << endl;
    }
};

// Second Base Class
class Beta {
private:
    int beta_data; // Private data member for Beta

public:
    // Constructor for Beta
    Beta(int b) {
        beta_data = b;
        cout << "Constructor for Beta is called." << endl;
    }

    // Function to display Beta's data
    void display_beta() {
        cout << "Data from Beta class: " << beta_data << endl;
    }

    // Destructor for Beta
    ~Beta() {
        cout << "Destructor for Beta is called." << endl;
    }
};

// Derived class from Alpha and Beta
class Gamma : public Alpha, public Beta {
private:
    int gamma_data; // Private data member for Gamma

public:
    // Constructor for Gamma
    // It calls constructors of base classes Alpha and Beta using an initializer list.
    Gamma(int a, int b, int c) : Alpha(a), Beta(b) {
        gamma_data = c;
        cout << "Constructor for Gamma is called." << endl;
    }

    // Function to display data from all three classes
    void display_gamma() {
        cout << "\n--- Displaying All Data ---" << endl;
        display_alpha(); // Calling Alpha's display function
        display_beta();  // Calling Beta's display function
        cout << "Data from Gamma class: " << gamma_data << endl;
        cout << "---------------------------\n" << endl;
    }

    // Destructor for Gamma
    ~Gamma() {
        cout << "Destructor for Gamma is called." << endl;
    }
};

// Main function to test the classes
int main() {
    cout << "Creating an object of the Gamma class...\n" << endl;
    
    // Create an object of Gamma, which will trigger the constructor calls
    Gamma G(10, 20, 30);

    // Display the data stored in the object
    G.display_gamma();

    cout << "Object G is about to go out of scope. Destructors will be called." << endl;

    return 0;
}