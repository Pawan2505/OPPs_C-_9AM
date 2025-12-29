#include <iostream>
using namespace std;

// Class creation
class Parent {
public:
    // Data members (variables of class)
    string name;
    int age;

    // Member function
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main() {

    // Object creation
    Parent obj;

    // Assigning values using object
    obj.name = "Pawan Maurya";
    obj.age = 24;

    // Calling member function
    obj.display();

    return 0;
}
