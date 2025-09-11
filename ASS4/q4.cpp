/*4.	Class Student contains data members RollNo and Name as protected and member functions
 GetDetails() to get RollNo and Name and DisplayDetails() to display RollNo and Name.
Class Marks is publicly inherited from Student. Student class contains protected data
 member Subject1 and Subject2 i.e. marks obtained in two subjects and GetMarks() and 
 DisplayMarks() are two public member functions.
Class Result is publicly inherited from Marks. It contains private data member TotalMarks 
and two public methods CalculateResult() and DisplayResult() with status whether the 
student has “PASSED” or “FAILED”.  
Write a C ++ program to show the results according to the following formats:*/

#include <iostream>
#include <string>
using namespace std;

// Base class: Student
class Student {
protected:
    int RollNo;
    string Name;
public:
    void GetDetails() {
        cout << "Enter student roll number: ";
        cin >> RollNo;
        cin.ignore(); // Ignore newline after integer input
        cout << "Enter name of the student: ";
        getline(cin, Name);
    }

    void DisplayDetails() {
        cout << RollNo << "\t" << Name << "\t";
    }
};

// Derived class: Marks
class Marks : public Student {
protected:
    int Subject1, Subject2;
public:
    void GetMarks() {
        cout << "Enter the marks of subject 1: ";
        cin >> Subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> Subject2;
    }

    void DisplayMarks() {
        cout << Subject1 << "\t\t" << Subject2 << "\t\t";
    }
};

// Derived class: Result
class Result : public Marks {
private:
    int TotalMarks;
public:
    void CalculateResult() {
        TotalMarks = Subject1 + Subject2;
    }

    void DisplayResult() {
        cout << TotalMarks << "\t\t\t";
        if (TotalMarks >= 50) // Assuming passing marks >= 50
            cout << "PASSED";
        else
            cout << "FAILED";
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Result* students = new Result[n]; // Array of Result objects

    cout << endl;
    // Input details and marks for each student
    for (int i = 0; i < n; i++) {
        students[i].GetDetails();
        students[i].GetMarks();
        students[i].CalculateResult();
        cout << endl;
    }

    // Display header
    cout << "Roll No.\tName\tSubject1\tSubject2\tTotal Marks Obtained\tResult\n";
    cout << "--------------------------------------------------------------------------\n";

    // Display results
    for (int i = 0; i < n; i++) {
        students[i].DisplayDetails();
        students[i].DisplayMarks();
        students[i].DisplayResult();
    }

    cout << "--------------------------------------------------------------------------\n";

    delete[] students; // free dynamic memory
    return 0;
}
