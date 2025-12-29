#include <iostream>
using namespace std;

// Class creation
class Parent {
private:
    // Private data members (data hiding)
    string name;
    int age;

public:
    // Setter method
    // Used to set values to private variables
    void setDetails(string name, int age) {
        // this-> refers to current object
        this->name = name;
        this->age = age;
    }

    // Getter method
    // Used to get/display private data
    void getDetails() {
        cout << "Your name : " << name << endl;
        cout << "Your age : " << age << endl;
    }
};

int main() {

    // Object creation
    Parent obj, obj2;

    // Direct access is NOT allowed (private members)
    // obj.name = "Pawan";   ❌ Error
    // obj.age = 22;         ❌ Error

    // Setting values using setter
    obj.setDetails("Pawan", 22);
    obj2.setDetails("Manish", 24);

    // Getting values using getter
    obj2.getDetails();
    obj.getDetails();

    return 0;
}
