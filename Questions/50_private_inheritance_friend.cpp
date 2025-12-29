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

// Derived class with PRIVATE inheritance
class B : private A {
public:
    void datadisplay() {
        // Allowed because B is friend of A
        display();
    }
};

int main() {

    B b;
    b.datadisplay();   // ✅ Allowed

    // b.display();     // ❌ Not allowed (private inheritance)

    return 0;
}
