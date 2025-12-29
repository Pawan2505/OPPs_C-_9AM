#include <iostream>
using namespace std;

// Global variable
int age = 50;

int main() {

    // Local variable
    int age = 25;

    // :: is scope resolution operator
    // Used to access global variable when local variable has same name
    cout << "Global Age : " << ::age << endl;

    return 0;
}
