#include <iostream>
#include <vector>   // Header file for vector
using namespace std;

int main() {

    // Vector declaration with initialization
    vector<int> v1 = {12, 435, 67, 78};

    // -------------------------------
    // Adding elements at the end
    // -------------------------------
    // v1.push_back(10);
    // v1.push_back(20);
    // v1.push_back(30);

    // -------------------------------
    // Size and empty check
    // -------------------------------
    // cout << "Size of vector : " << v1.size() << endl;
    // cout << "Vector empty or not : " << v1.empty() << endl;

    // -------------------------------
    // Remove all elements
    // -------------------------------
    // v1.clear();
    // cout << "Size after clear : " << v1.size() << endl;

    // -------------------------------
    // Remove last element
    // -------------------------------
    // v1.pop_back();

    // -------------------------------
    // Access first and last element
    // -------------------------------
    // cout << "Front element : " << v1.front() << endl;
    // cout << "Last element  : " << v1.back() << endl;

    // -------------------------------
    // Traversing vector (Index based loop)
    // -------------------------------
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    return 0;
}
