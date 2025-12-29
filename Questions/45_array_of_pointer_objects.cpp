#include <iostream>
using namespace std;

// Class creation
class Student {
public:
    int age;

    // Constructor
    Student(int age) {
        this->age = age;
        cout << "Constructor called for age: " << age << endl;
    }

    // Member function
    void display() {
        cout << "Age : " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for age: " << age << endl;
    }
};

int main() {

    // Array of pointers to Student objects
    Student* s1[2];

    // Dynamic object creation
    s1[0] = new Student(21);
    s1[1] = new Student(22);

    // Accessing objects using arrow operator
    s1[0]->display();
    s1[1]->display();

    // Deleting objects
    delete s1[0];
    s1[0] = nullptr;   // Good practice

    delete s1[1];
    s1[1] = nullptr;   // Good practice

    // ❌ NEVER do this (undefined behavior)
    // s1[1]->display();

    return 0;
}
