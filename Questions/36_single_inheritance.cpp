#include <iostream>
using namespace std;

// Parent class
class A {
public:
    void displayA() {
        cout << "Class A..." << endl;
    }
};

// Child class (inherits A)
class B : public A {
};

int main() {

    B b;

    // Child object accessing parent method
    b.displayA();

    return 0;
}
