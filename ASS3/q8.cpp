//	Implement dynamic memory allocation. Use new and delete keywords.
#include <iostream>
using namespace std;

int main() {
    int *ptr;  // Pointer to store the address of dynamically allocated memory

    // Allocate memory for a single integer using 'new'
    ptr = new int;

    // Store a value
    *ptr = 25;

    cout << "Value stored in dynamically allocated memory: " << *ptr << endl;

    // Free the allocated memory
    delete ptr;

    // Allocate memory for an array of 5 integers
    int *arr = new int[5];

    // Assign values to the array
    for(int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    cout << "Values in dynamically allocated array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the array memory
    delete[] arr;

    return 0;
}
