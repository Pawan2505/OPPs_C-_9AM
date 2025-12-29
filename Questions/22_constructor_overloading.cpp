#include <iostream>
using namespace std;

// Class creation
class Student {
public:
    // Data members
    string name;
    double age;
    int salary = 23435;

    // Default constructor
    Student() {
        cout << "Default constructor called" << endl;
        name = "Pawan";
        age = 24;
        salary = 3846364;
    }

    // Parameterized constructor (int age)
    Student(string name, int age) {
        cout << "Parameterized constructor (int age)" << endl;
        this->name = name;
        this->age = age;
    }

    // Parameterized constructor (double age)
    Student(string name, double age) {
        cout << "Parameterized constructor (double age)" << endl;
        this->name = name;
        this->age = age;
    }

    // Parameterized constructor (3 parameters)
    Student(string name, int age, int salary) {
        cout << "Parameterized constructor (3 parameters)" << endl;
        this->name = name;
        this->age = age;
        this->salary = salary;
    }

    // Member function
    void details() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main() {

    // Object creation → constructor automatically invoked
    Student s1("Manish", 25);
    s1.details();

    // Uncomment to test other constructors
    // Student s2;
    // s2.details();

    // Student s3("Pankaj", 30, 749283);
    // s3.details();

    return 0;
}
