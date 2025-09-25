#include <iostream>
#include <string>
#include <vector> // Using vector is often safer and simpler, but the question implies manual memory management.

// The provided ShoppingCart class
class ShoppingCart {
private:
    int cart_id;
    std::string customer_name;
    int item_count;

public:
    ShoppingCart(int id, std::string name, int count) {
        cart_id = id;
        customer_name = name;
        item_count = count;
    }

    ~ShoppingCart() {
        std::cout << "Thank you, " << customer_name << ". Your cart (ID: " << cart_id << ") is closed." << std::endl;
    }

    void display_cart() {
        std::cout << "\n--- Cart Details ---" << std::endl;
        std::cout << "Cart ID: " << cart_id << std::endl;
        std::cout << "Customer Name: " << customer_name << std::endl;
        std::cout << "Number of Items in Cart: " << item_count << std::endl;
    }
};

// The main function as requested
int main() {
    int n;
    std::cout << "Enter the number of shopping carts to create: ";
    std::cin >> n;

    // Dynamically create an array of POINTERS to ShoppingCart objects
    ShoppingCart **carts = new ShoppingCart*[n];

    // Loop to get user input and initialize each object
    for (int i = 0; i < n; ++i) {
        int id;
        std::string name;
        int count;

        std::cout << "\nEnter details for Cart #" << i + 1 << ":" << std::endl;
        std::cout << "Enter Cart ID: ";
        std::cin >> id;
        std::cout << "Enter Customer Name: ";
        std::cin.ignore(); // To consume the newline character left by cin
        std::getline(std::cin, name);
        std::cout << "Enter Item Count: ";
        std::cin >> count;

        // Create a new ShoppingCart object and store its pointer in the array
        carts[i] = new ShoppingCart(id, name, count);
    }

    // Display the details for each cart
    std::cout << "\n--- Displaying All Shopping Cart Details ---" << std::endl;
    for (int i = 0; i < n; ++i) {
        carts[i]->display_cart();
    }

    // Release the dynamically allocated memory
    std::cout << "\n--- Releasing Memory ---" << std::endl;
    for (int i = 0; i < n; ++i) {
        delete carts[i]; // Deletes each individual ShoppingCart object, calling its destructor
    }
    delete[] carts; // Deletes the array of pointers

    std::cout << "Program terminated successfully." << std::endl;

    return 0;
}