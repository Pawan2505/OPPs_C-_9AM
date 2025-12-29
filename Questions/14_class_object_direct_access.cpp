#include <iostream>
using namespace std;

// Class creation
class Parent {
public:
    // Data members
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

    // Assigning values
    obj.name = "Pawan Maurya";
    obj.age = 24;

    // Accessing data members directly
    cout << "Your name : " << obj.name << endl;
    cout << "Your age : " << obj.age << endl;

    return 0;
}
