#include <iostream>
using namespace std;

// Class creation
class Parent {
private:
    string name;
    int age;

    // Static variable (shared by all objects)
    static int salary;

public:
    // Setter method
    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Getter method
    void getDetails() {
        cout << "Your name : " << name << endl;
        cout << "Your age : " << age << endl;
        cout << "Your salary : " << salary << endl;
    }
};

// Static member initialization (must be outside class)
int Parent::salary = 1000;

int main() {

    // Array of objects
    Parent obj[3];

    obj[0].setDetails("Sachin", 26);
    obj[1].setDetails("Manish", 25);
    obj[2].setDetails("Vivek", 24);

    obj[1].getDetails();
    obj[0].getDetails();
    obj[2].getDetails();

    return 0;
}
