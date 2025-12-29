#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void speak() {
        cout << "Every animal speaks!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Function overriding
    void speak() override {
        cout << "Dog barks!" << endl;
    }
};

int main() {

    // Base class pointer pointing to derived class object
    Animal* a;

    Dog d1;

    a = &d1;

    // Run-time decision
    a->speak();   // Calls Dog's speak()

    return 0;
}
