#include <iostream>
using namespace std;

// Class creation
class Vehicle {
public:
    int* srno;   // Pointer data member

    // Constructor
    Vehicle(int srno) {
        this->srno = new int;   // Dynamic memory allocation
        *this->srno = srno;
        cout << "Constructor called" << endl;
    }

    // Member function
    void display() {
        cout << "Srno : " << *srno << endl;
    }

    // Destructor
    ~Vehicle() {
        cout << "Destructor is called" << endl;

        // Free dynamically allocated memory
        delete srno;

        // ⚠️ IMPORTANT:
        // After delete, pointer memory is freed
        // Accessing *srno now is UNDEFINED BEHAVIOR
        // cout << *srno;  ❌ NEVER DO THIS

        srno = nullptr; // Good practice
    }
};

int main() {

    // Object created dynamically
    Vehicle* v1 = new Vehicle(123);

    v1->display();

    // Manually deleting object
    delete v1;   // Destructor is called here

    return 0;
}
