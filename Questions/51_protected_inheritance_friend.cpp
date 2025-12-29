#include <iostream>
using namespace std;

// Base class
class A {
private:
    void display() {
        cout << "Class A" << endl;
    }

    // Friend class declaration
    friend class B;
};

// Derived class with PROTECTED inheritance
class B : protected A {
public:
    void datadisplay() {
        // Allowed because B is friend of A
        display();
    }
};

int main() {

    B b;
    b.datadisplay();   // ✅ Allowed

    // b.display();     // ❌ Not allowed (protected inheritance)

    return 0;
}
