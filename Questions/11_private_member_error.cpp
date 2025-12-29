#include <iostream>
using namespace std;

// Class creation
class Parent {
private:
    // Private member function
    void display() {
        cout << "Hello Display Bhai!" << endl;
    }
};

int main() {

    // Object creation
    Parent obj;

    // Trying to access private method
    // obj.display(); // ❌ Error: display() is private

    return 0;
}
