#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "Class A..." << endl;
    }
};

// Derived from A
class B : public A {
public:
    void displayB() {
        cout << "Class B..." << endl;
    }
};

// Derived from B
class C : public B {
};

int main() {

    C c;

    // Accessing grandparent and parent methods
    c.displayA();
    c.displayB();

    return 0;
}
