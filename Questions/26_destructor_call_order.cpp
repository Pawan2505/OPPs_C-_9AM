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
    // Called automatically when object goes out of scope
    ~Vehicle() {
        cout << "Destructor is called for srno: " << srno << endl;
    }
};

int main() {

    // Object creation
    Vehicle v1(123);
    Vehicle v2(112233);

    // Function calls
    v1.display();
    v2.display();
    v1.display();

    // Destructor will be called automatically
    // when main() ends

    return 0;
}
