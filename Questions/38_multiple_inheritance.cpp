#include <iostream>
using namespace std;

// First parent
class A {
public:
    void displayA() {
        cout << "Class A..." << endl;
    }
};

// Second parent
class B {
public:
    void displayB() {
        cout << "Class B..." << endl;
    }
};

// Child inherits from both A and B
class C : public A, public B {
};

int main() {

    C c;

    c.displayA();
    c.displayB();

    return 0;
}
