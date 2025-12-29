#include <iostream>
using namespace std;

// Parent class
class Teacher {
public:
    // Parent class function
    void teach() {
        cout << "Teacher agr students nhi padhte to marta bhee hai." << endl;
    }
};

// Child class (inherits Teacher)
class Student : public Teacher {
public:
    void display() {
        cout << "Child class..." << endl;
    }
};

int main() {

    // Child class object
    Student s1;

    // Accessing parent class function
    s1.teach();

    // Accessing child class function
    s1.display();

    return 0;
}
