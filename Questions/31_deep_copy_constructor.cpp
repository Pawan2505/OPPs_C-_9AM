#include <iostream>
using namespace std;

// Class creation
class DiamondCompany {
public:
    int id;
    string *name;   // Pointer member (dynamic memory)

    // Parameterized constructor
    DiamondCompany(int id, string name) {
        cout << "Parameterized constructor called..." << endl;
        this->id = id;
        this->name = new string(name); // dynamic memory allocation
    }

    // Deep Copy Constructor
    DiamondCompany(const DiamondCompany &object) {
        cout << "Deep Copy constructor called..." << endl;

        this->id = object.id;

        // IMPORTANT: Allocate NEW memory
        this->name = new string(*object.name);  // ✅ deep copy
    }

    // Destructor (very important with dynamic memory)
    ~DiamondCompany() {
        delete name;
    }

    // Display function
    void display() {
        cout << "Id   : " << id << endl;
        cout << "Name : " << *name << endl;
        cout << "Name Address : " << name << endl;
    }
};

int main() {

    // Original object
    DiamondCompany diamond(1, "Pawan");
    diamond.display();

    cout << "------------------" << endl;

    // Copy object → deep copy constructor called
    DiamondCompany secondDiamond = diamond;
    secondDiamond.display();

    return 0;
}
