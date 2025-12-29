#include <iostream>
using namespace std;

// Class creation
class Vehicle {
public:
    int srno;

    // Constructor
    Vehicle(int srno) {
        this->srno = srno;
        cout << "Constructor called for srno: " << srno << endl;
    }

    // Member function
    void display() {
        cout << "Srno : " << srno << endl;
    }

    // Destructor
    // Destructor name is same as class name with ~ symbol
    // It is used to free resources
    // Automatically called when object goes out of scope
    // No return type and no parameters
    // Called only once per object
    // Cannot be overloaded
    // Compiler provides default destructor if not defined

    ~Vehicle() {
        cout << "Destructor called for srno: " << srno << endl;
    }
};

int main() {

    // Object creation
    Vehicle v1(123);
    Vehicle v2(112233);

    v1.display();
    v2.display();

    // Destructor will be called automatically here
    // (when main() ends)

    return 0;
}
