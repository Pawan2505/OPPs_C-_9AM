#include <iostream>
using namespace std;

class A {
private:
    void display() {
        cout << "Class A" << endl;
    }
};

int main() {

    A a;

    // ❌ ERROR: private member function
    // a.display();

    return 0;
}
