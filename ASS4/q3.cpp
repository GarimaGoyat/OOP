/*3.	Make a class named Fruit with a data member 
to calculate the number of fruits in a basket. Create
 two other class named Apples and Mangoes to calculate the 
 number of apples and mangoes in the basket. Print the number of 
 fruits of each type and the total number of fruits in the basket.*/

 #include <iostream>
using namespace std;

// Base class
class Fruit {
protected:
    int totalFruits;
public:
    Fruit() { totalFruits = 0; }  // Constructor initializes totalFruits
    void setTotalFruits(int t) { totalFruits = t; }
    int getTotalFruits() { return totalFruits; }
};

// Derived class for Apples
class Apples : public Fruit {
    int numApples;
public:
    void setApples(int a) { 
        numApples = a; 
        totalFruits += a; // Add to total fruits
    }
    int getApples() { return numApples; }
};

// Derived class for Mangoes
class Mangoes : public Fruit {
    int numMangoes;
public:
    void setMangoes(int m) { 
        numMangoes = m; 
        totalFruits += m; // Add to total fruits
    }
    int getMangoes() { return numMangoes; }
};

int main() {
    Apples a;
    Mangoes m;

    int nApples, nMangoes;

    cout << "Enter number of apples: ";
    cin >> nApples;
    cout << "Enter number of mangoes: ";
    cin >> nMangoes;

    a.setApples(nApples);
    m.setMangoes(nMangoes);

    cout << "\nNumber of apples: " << a.getApples() << endl;
    cout << "Number of mangoes: " << m.getMangoes() << endl;

    // Total fruits in basket
    int total = a.getTotalFruits() + m.getTotalFruits();
    cout << "Total number of fruits in basket: " << total << endl;

    return 0;
}
//  if i use static for total fruits then the same value is updated in all the class
//  and can do directly Fruit::getTotalFruits()
/*
#include <iostream>
using namespace std;

// Base class
class Fruit {
protected:
    static int totalFruits;  // shared by all objects
public:
    static int getTotalFruits() { return totalFruits; } // access shared total
};

// Initialize static member
int Fruit::totalFruits = 0;

// Derived class for Apples
class Apples : public Fruit {
    int numApples;
public:
    void setApples(int a) { 
        numApples = a; 
        totalFruits += a;  // update shared total
    }
    int getApples() { return numApples; }
};

// Derived class for Mangoes
class Mangoes : public Fruit {
    int numMangoes;
public:
    void setMangoes(int m) { 
        numMangoes = m; 
        totalFruits += m;  // update shared total
    }
    int getMangoes() { return numMangoes; }
};

int main() {
    Apples a;
    Mangoes m;

    int nApples, nMangoes;

    cout << "Enter number of apples: ";
    cin >> nApples;
    cout << "Enter number of mangoes: ";
    cin >> nMangoes;

    a.setApples(nApples);
    m.setMangoes(nMangoes);

    cout << "\nNumber of apples: " << a.getApples() << endl;
    cout << "Number of mangoes: " << m.getMangoes() << endl;

    // Total fruits in basket (shared)
    cout << "Total number of fruits in basket: " << Fruit::getTotalFruits() << endl;

    return 0;
}
*/