#include <iostream>
using namespace std;

// Class A
class A {
private:
    // Private member function
    void display() {
        cout << "Hello Class A" << endl;
    }

    // Declaring class B as a friend
    friend class B;
};

// Class B (Friend of class A)
class B : public A {
public:
    void details() {
        // Accessing private member of class A
        display();   // ✅ Allowed because B is a friend of A
    }
};

int main() {

    B b;
    b.details();

    return 0;
}
