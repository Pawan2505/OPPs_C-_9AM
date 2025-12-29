#include <iostream>
using namespace std;

// Class creation
class Parent {
private:
    string name;
    int age;

public:
    // Setter method to assign values
    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

    // Getter method to display values
    void getDetails() {
        cout << "Your name : " << name << endl;
        cout << "Your age : " << age << endl;
    }
};

int main() {

    // Creating array of objects
    Parent obj[3];   // 3 objects created in array

    // Setting values for each object
    obj[0].setDetails("Sachin", 26);
    obj[1].setDetails("Manish", 25);
    obj[2].setDetails("Vivek", 24);

    // Accessing object data using index
    obj[1].getDetails();
    obj[0].getDetails();
    obj[2].getDetails();

    return 0;
}
