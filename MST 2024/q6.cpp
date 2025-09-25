#include <iostream>
#include <string>

// Base Class
class Company {
protected:
    std::string company_name;
    std::string location;

public:
    // Parameterized constructor for Company
    Company(std::string cname, std::string loc) {
        company_name = cname;
        location = loc;
    }
};

// Intermediate Class inheriting from Company
class Team : public Company {
protected:
    std::string team_name;
    std::string project;

public:
    // Constructor for Team calls Company's constructor
    Team(std::string cname, std::string loc, std::string tname, std::string proj): Company(cname, loc) { // Call base class constructor
        team_name = tname;
        project = proj;
    }
};

// Derived Class inheriting from Team
class Developer : public Team {
private:
    std::string developer_name;
    std::string programming_language;

public:
    // Constructor for Developer calls Team's constructor
    Developer(std::string cname, std::string loc, std::string tname, std::string proj, std::string dname, std::string lang)
        : Team(cname, loc, tname, proj) { // Call intermediate base class constructor
        developer_name = dname;
        programming_language = lang;
    }

    // Function to display all details from all classes
    void displayDetails() {
        std::cout << "--- Developer Details ---" << std::endl;
        std::cout << "Company: " << company_name << " (" << location << ")" << std::endl;
        std::cout << "Team: " << team_name << " (Project: " << project << ")" << std::endl;
        std::cout << "Developer: " << developer_name << " (Language: " << programming_language << ")" << std::endl;
    }
};

int main() {
    // Create an object of the most derived class, Developer
    Developer dev1("Google", "Mountain View", "Cloud AI", "Project Gemini", "Garima Goyat", "C++");
    
    // Display the details, which will include data from all parent classes
    dev1.displayDetails();
    
    return 0;
}