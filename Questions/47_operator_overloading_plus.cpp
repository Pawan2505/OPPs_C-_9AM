#include <iostream>
using namespace std;

// Class creation
class Add {
public:
    int x;
    int y;

    // Default constructor
    Add() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    Add(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Operator overloading for +
    // Syntax: returnType operator+(const ClassName &obj)
    Add operator+(const Add &obj) {

        Add result;   // Temporary object

        // Adding respective data members
        result.x = this->x + obj.x;
        result.y = this->y + obj.y;

        return result;
    }
};

int main() {

    Add a1(10, 20);
    Add a2(30, 40);

    // Using overloaded + operator
    Add a3 = a1 + a2;

    cout << "X : " << a3.x << endl;
    cout << "Y : " << a3.y << endl;

    return 0;
}
