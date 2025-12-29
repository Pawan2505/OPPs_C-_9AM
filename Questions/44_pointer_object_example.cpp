#include <iostream>
using namespace std;

// Class creation
class Student {
public:
    int age;

    // Constructor
    Student(int age) {
        this->age = age;
        cout << "Constructor called" << endl;
    }

    // Member function
    void display() {
        cout << "Age : " << age << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {

    // Object created on heap (dynamic memory)
    Student* s1 = new Student(21);

    // Accessing member using arrow operator
    s1->display();

    // Freeing memory
    delete s1;

    // IMPORTANT: After delete, pointer becomes invalid
    s1 = nullptr;

    // ❌ NEVER DO THIS (undefined behavior)
    // s1->display();

    return 0;
}
