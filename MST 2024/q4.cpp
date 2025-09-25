#include <iostream>
#include <string>
#include <iomanip> // For std::fixed and std::setprecision

// Forward declarations for the transfer function
class Donor;
class Recipient;

class Donor {
private:
    std::string donor_name;
    double balance;

public:
    void set_details(std::string name, double amount) {
        donor_name = name;
        balance = amount;
    }

    void display() {
        std::cout << "Donor Name: " << donor_name << ", Balance: $" << std::fixed << std::setprecision(2) << balance << std::endl;
    }

    double get_balance() {
        return balance;
    }
    
    // Public method to decrease the balance
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        }
    }
};

class Recipient {
private:
    std::string recipient_name;
    double account_balance;
    double amount_required;

public:
    void set_details(std::string name, double balance, double amount) {
        recipient_name = name;
        account_balance = balance;
        amount_required = amount;
    }

    void display() {
        std::cout << "Recipient Name: " << recipient_name << ", Account Balance: $" << std::fixed << std::setprecision(2) << account_balance << std::endl;
    }

    double get_balance() {
        return account_balance;
    }
    
    // Public method to increase the balance
    void deposit(double amount) {
        account_balance += amount;
    }
};

// Global function to facilitate the transfer
void transfer(Donor &donor, Recipient &recipient, double amount) {
    std::cout << "\nAttempting to transfer $" << std::fixed << std::setprecision(2) << amount << "..." << std::endl;
    if (donor.get_balance() >= amount) {
        donor.withdraw(amount);
        recipient.deposit(amount);
        std::cout << "Success! Transfer completed." << std::endl;
    } else {
        std::cout << "Error: Insufficient funds. Transfer failed." << std::endl;
    }
}

int main() {
    // Create a donor and a recipient object
    Donor donor;
    Recipient recipient;

    // Initialize their details
    donor.set_details("Alice", 1500.00);
    recipient.set_details("Charity Foundation", 500.00, 2000.00);

    std::cout << "--- Initial Balances ---" << std::endl;
    donor.display();
    recipient.display();

    // Perform a valid transfer
    transfer(donor, recipient, 1000.00);

    std::cout << "\n--- Balances after first transfer ---" << std::endl;
    donor.display();
    recipient.display();

    // Attempt an invalid transfer
    transfer(donor, recipient, 700.00);
    
    std::cout << "\n--- Balances after failed transfer attempt ---" << std::endl;
    donor.display();
    recipient.display();

    return 0;
}