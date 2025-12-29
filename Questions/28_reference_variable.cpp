#include <iostream>
using namespace std;

// Function using reference variable
void display(int &x) {
    cout << "Value of x : " << x << endl;
    cout << "Address of x : " << &x << endl;

    // Modifying original variable
    x = 15;

    cout << "Updated value of x : " << x << endl;
}

int main() {

    int n = 10;

    cout << "Value of n : " << n << endl;
    cout << "Address of n : " << &n << endl;

    display(n);   // Passing by reference

    cout << "Value of n after function call : " << n << endl;

    return 0;
}
