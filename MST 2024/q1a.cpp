#include <iostream>

class Triangle {
private:
    double base;
    double height;

public:
    // Default constructor
    Triangle() : base(0), height(0) {}

    // Parameterized constructor to initialize triangle dimensions
    Triangle(double b, double h) : base(b), height(h) {}

    // Member function to calculate the area of the triangle
    double getArea() {
        return 0.5 * base * height;
    }

    // Public function to compare the areas of two other triangle objects
    // It returns the triangle with the larger area by value.
    Triangle compareArea(Triangle &t1, Triangle &t2) {
        if (t1.getArea() > t2.getArea()) {
            return t1;
        } else {
            return t2;
        }
    }

    // Utility function to display the triangle's dimensions
    void display() {
        std::cout << "Triangle with Base: " << base << " and Height: " << height << std::endl;
    }
};

int main() {
    // Create two triangle objects with different dimensions
    Triangle t1(10.0, 5.0); // Area = 25
    Triangle t2(8.0, 8.0);  // Area = 32

    std::cout << "Comparing two triangles:" << std::endl;
    t1.display();
    t2.display();
    
    // Create a dummy triangle object to call the compareArea function
    Triangle helper; 
    
    // Call compareArea to find the larger triangle
    Triangle largerTriangle = helper.compareArea(t1, t2);

    std::cout << "\nThe triangle with the larger area is:" << std::endl;
    largerTriangle.display();

    return 0;
}