#include <iostream>
using namespace std;

// Global variable (accessible in all functions)
int age = 25;

// Function definition
int data() {
    // Accessing global variable inside function
    cout << "Function age : " << age << endl;

    // salary is NOT accessible here because it is local to main()
    // cout << "Salary fun : " << salary << endl; // ❌ Error
    return 0;
}

int main() {

    // Local variable (accessible only inside main)
    int salary = 999999;

    // Function call
    data();

    // Accessing global variable
    cout << "Main age : " << age << endl;

    // Accessing local variable
    cout << "Salary fun : " << salary << endl;

    return 0;
}
