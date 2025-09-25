#include <iostream>

// Global variable 'count' to track the number of items.
// Initialized to 20.
int count = 20;

// A separate function to demonstrate a different scope.
// This function is not required by the question to be called from main.
void customerTracking() {
    // Local variable 'count' to track the number of customers.
    // Initialized to 12. This variable only exists inside this function.
    int count = 12;
    // We could use this variable here, for example:
    // std::cout << "Number of customers: " << count << std::endl;
}

int main() {
    // This line will access the global 'count' variable because
    // no local variable 'count' is defined in main's scope.
    std::cout << "Number of items: " << count << std::endl;

    return 0;
}