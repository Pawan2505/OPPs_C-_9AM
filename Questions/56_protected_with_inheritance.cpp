#include <iostream>
using namespace std;

// Base class
class A {
protected:
    // Protected member function
    void display() {
        cout << "Class A" << endl;
    }
};

// Derived class
class B : public A {
public:
    void datadisplay() {
        // Allowed because display() is protected
        display();
    }
};

int main() {

    B b;
    b.datadisplay();   // ✅ Works fine

    return 0;
}
