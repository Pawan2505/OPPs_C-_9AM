#include <iostream>
using namespace std;

// Class creation
class DiamondCompany {
public:
    int id;
    string* name;   // Pointer data member (dynamic memory)

    // Parameterized constructor
    DiamondCompany(int id, string name) {
        cout << "Parameterized constructor called..." << endl;
        this->id = id;
        this->name = new string(name);   // Allocate memory
    }

    // Deep Copy Constructor
    DiamondCompany(const DiamondCompany &object) {
        cout << "Deep copy constructor called..." << endl;

        this->id = object.id;

        // Allocate NEW memory and copy value
        this->name = new string(*object.name);   // ✅ Deep Copy
    }

    // Destructor
    ~DiamondCompany() {
        delete name;      // Free memory
        name = nullptr;   // Good practice
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

    cout << "---------------------" << endl;

    // Copy object → deep copy constructor called
    DiamondCompany secondDiamond = diamond;
    secondDiamond.display();

    return 0;
}
