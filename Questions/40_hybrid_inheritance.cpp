#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "Class A..." << endl;
    }
};

// Derived classes using virtual inheritance
class B : virtual public A {
public:
    void displayB() {
        cout << "Class B..." << endl;
    }
};

class C : virtual public A {
public:
    void displayC() {
        cout << "Class C..." << endl;
    }
};

// Final derived class
class D : public B, public C {
public:
    void displayD() {
        cout << "Class D..." << endl;
    }
};

int main() {

    D d;

    // No ambiguity due to virtual inheritance
    d.displayA();

    return 0;
}
