#include <iostream>
using namespace std;

// Class creation
class Parent {
public:
    // Public member function
    void display() {
        cout << "Hello Display Bhai!" << endl;
    }
};

int main() {

    // Object creation
    Parent obj;

    // Accessing public function using object
    obj.display(); // ✅ Works fine

    return 0;
}
