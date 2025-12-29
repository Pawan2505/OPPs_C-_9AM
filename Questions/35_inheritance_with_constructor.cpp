#include <iostream>
using namespace std;

// Parent class
class Teacher {
public:
    int salary;
    string name;

    // Parent class constructor
    Teacher(int salary, string name) {
        this->salary = salary;
        this->name = name;
    }

    void teach() {
        cout << "Teacher agr students nhi padhte to marta bhee hai." << endl;
        cout << "Salary : " << salary << endl;
    }
};

// Child class
class Student : public Teacher {
public:
    int age;

    // Child class constructor
    // Calling parent constructor using initializer list
    Student(int age, int salary, string name)
        : Teacher(salary, name) {

        this->age = age;
    }

    void showDetails() {
        cout << "Child class..." << endl;
        cout << "Age    : " << age << endl;
        cout << "Salary : " << salary << endl;
        cout << "Name   : " << name << endl;
    }
};

int main() {

    // Child class object
    Student s1(22, 999999, "Pawan");

    // Parent class method
    s1.teach();

    // Child class method
    s1.showDetails();

    return 0;
}
