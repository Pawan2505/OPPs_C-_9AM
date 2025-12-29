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

    // Display function
    void display() {
        cout << "Id   : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main() {

    // Original object
    DiamondCompany diamond(1, "Kohinoor");

    // Copying object (default copy constructor)
    DiamondCompany secondDiamond = diamond;   // Shallow copy

    // Display copied object
    secondDiamond.display();

    return 0;
}
