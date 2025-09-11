#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    // private helper function
    void secretMessage() {
        cout << "Private function accessed inside class!" << endl;
    }

public:
    // add details
    void addDetails(string n, int r, string d, string h, float cg) {
        name = n;
        rollNo = r;
        degree = d;
        hostel = h;
        currentCGPA = cg;
        secretMessage(); // calling private function inside public
    }

    // update hostel
    void updateHostel(string newHostel) {
        hostel = newHostel;
    }

    // update CGPA
    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
    }

    // display details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student s1;

    // add details
    s1.addDetails("Garima", 101, "B.Tech CSE", "Hostel A", 8.5);

    // update some info
    s1.updateHostel("Hostel B");
    s1.updateCGPA(9.0);

    // display final details
    s1.displayDetails();

    return 0;
}



















/*#include<bits/stdc++.h>
using namespace std;
class student{
        private:
        double cgpa;
        public:
        string name;
        int roolno;
        string degree;

        void updatecgpa(double c){
            cgpa=c;
        }
        void displaycg(){
            cout<<cgpa<<'\n';
        }
    };
int main(){
    student s1;
    s1.name="Garima Goyat";
    //s1.cgpa=6.6; //this a wrong context since cgpa is a private member of the class
    //s1.updatecgpa(6.5);
    //s1.displaycg();
    cout<<s1.name;
    return 0;
}*/