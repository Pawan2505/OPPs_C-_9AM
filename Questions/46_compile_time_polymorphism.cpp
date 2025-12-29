#include <iostream>
using namespace std;

class Student {
public:
    string name;
    double salary;

    // Default constructor
    Student() {
        cout << "Default Constructor called" << endl;
        name = "Vaibhavi";
        salary = 237288723753;
    }

    // Parameterized constructor
    Student(string name, double salary) {
        cout << "Parameterized Constructor called" << endl;
        this->name = name;
        this->salary = salary;
    }

    // Member function
    void display() {
        cout << "Name   : " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main() {

    // Constructor overloading
    Student s1("Chintan", 784628376827);
    Student s2;

    s2.display();
    s1.display();

    return 0;
}
