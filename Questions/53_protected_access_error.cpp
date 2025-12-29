#include <iostream>
using namespace std;

class A {
protected:
    void display() {
        cout << "Class A" << endl;
    }
};

int main() {

    A a;

    // ❌ ERROR: protected member
    // a.display();

    return 0;
}
