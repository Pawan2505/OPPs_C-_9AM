#include <iostream>
using namespace std;

// Class creation
class Parent {
public:
    string name;
    int age;

    // Static variable (public)
    static int salary;

public:
    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void getDetails() {
        cout << "Your name : " << name << endl;
        cout << "Your age : " << age << endl;
        cout << "Your salary : " << salary << endl;
    }
};

// Static member initialization
int Parent::salary = 1000;

int main() {

    Parent obj[3];

    obj[0].setDetails("Sachin", 26);
    obj[1].setDetails("Manish", 25);
    obj[2].setDetails("Vivek", 24);

    obj[1].getDetails();
    obj[0].getDetails();
    obj[2].getDetails();

    // Accessing static variable using class name
    cout << "By class : " << Parent::salary << endl;  // ✅ Allowed

    return 0;
}
