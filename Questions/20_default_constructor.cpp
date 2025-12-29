#include <iostream>
using namespace std;

// Class creation
class Student {
public:
    // Parameterless / Default Constructor
    Student() {
        cout << "Student constructor called..." << endl;
    }
};

int main() {

    // Object creation
    // Constructor is automatically called
    Student s1;

    return 0;
}
