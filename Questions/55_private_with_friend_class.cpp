#include <iostream>
using namespace std;

// Base class
class A {
private:
    // Private member function
    void display() {
        cout << "Class A" << endl;
    }

    // Friend class declaration
    friend class B;
};

// Derived class
class B : public A {
public:
    void datadisplay() {
        // Allowed because B is friend of A
        display();
    }
};

int main() {

    B b;
    b.datadisplay();   // ✅ Works fine

    return 0;
}
