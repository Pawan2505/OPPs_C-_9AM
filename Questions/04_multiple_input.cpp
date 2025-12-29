#include <iostream>
using namespace std;

int main() {

    int age, salary;

    cout << "Enter Age and Salary : ";

    // cin can take multiple inputs in one line
    cin >> age >> salary;

    cout << "Your age : " << age
         << " and your salary : " << salary << endl;

    return 0;
}
