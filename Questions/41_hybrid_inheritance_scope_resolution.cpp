#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "Class A..." << endl;
    }
};

// Derived class B (virtual inheritance)
class B : virtual public A {
public:
    void displayB() {
        cout << "Class B..." << endl;
    }
};

// Derived class C (virtual inheritance)
class C : virtual public A {
public:
    void displayC() {
        cout << "Class C..." << endl;
    }
};

// Derived class D (inherits from B and C)
class D : public B, public C {
public:
    void displayD() {
        cout << "Class D..." << endl;
    }
};

int main() {

    D d;

    // Accessing base class function explicitly
    d.A::displayA();

    return 0;
}
