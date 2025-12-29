#include <iostream>
using namespace std;

// Base class
class A {
protected:
    void display() {
        cout << "Class A" << endl;
    }
};

// Derived class
class B : public A {
public:
    void show() {
        display();   // ✅ Allowed
    }
};

int main() {

    B b;
    b.show();   // ✅ Correct access

    return 0;
}
