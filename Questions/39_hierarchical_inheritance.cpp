#include <iostream>
using namespace std;

// Parent class
class A {
public:
    void displayA() {
        cout << "Class A..." << endl;
    }
};

// First child
class B : public A {
public:
    void displayB() {
        cout << "Class B..." << endl;
    }
};

// Second child
class C : public A {
public:
    void displayC() {
        cout << "Class C..." << endl;
    }
};

int main() {

    C c;
    c.displayA();

    B b;
    b.displayA();

    return 0;
}
