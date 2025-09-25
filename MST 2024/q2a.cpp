#include <iostream>

class Car {
private:
    int speed;
    double fuel;

public:
    // Constructor uses 'this' pointer to resolve ambiguity between
    // member variables and parameters with the same name.
    Car(int speed, double fuel) {
        std::cout << "Initializing Car object..." << std::endl;
        this->speed = speed;
        this->fuel = fuel;
    }

    // Method to display the car's details
    void displayDetails() {
        std::cout << "--- Car Details ---" << std::endl;
        std::cout << "Speed: " << speed << " km/h" << std::endl;
        std::cout << "Fuel: " << fuel << " liters" << std::endl;
    }
};

int main() {
    // Create a Car object, which calls the parameterized constructor
    Car myCar(120, 45.5);
    
    // Display the details of the created object
    myCar.displayDetails();

    return 0;
}