#include <iostream>
using namespace std;

// Class creation
class DiamondCompany {
public:
    int id;
    string name;

    // Parameterized constructor
    DiamondCompany(int id, string name) {
        this->id = id;
        this->name = name;
    }

    // Copy Constructor
    // Takes reference of same class object
    DiamondCompany(const DiamondCompany &object) {
        cout << "Copy constructor called..." << endl;
        this->id = object.id;
        this->name = object.name;
    }

    // Display function
    void display() {
        cout << "Id   : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main() {

    // Original object
    DiamondCompany diamond(1, "Kohinoor");

    diamond.display();

    // Object copy → copy constructor is called
    DiamondCompany secondDiamond = diamond;

    secondDiamond.display();

    return 0;
}
