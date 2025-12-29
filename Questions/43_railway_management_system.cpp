#include <iostream>
using namespace std;

// ============================
// Train Class
// ============================
class Train {
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    // Static data member (shared by all objects)
    static int trainCount;

public:
    // Destructor
    // Called automatically when object is destroyed
    ~Train() {
        trainCount--;
    }

    // Input train details
    void input() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;

        cout << "Enter Train Name: ";
        cin >> trainName;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Train Time: ";
        cin >> trainTime;

        // Increment train count
        trainCount++;
    }

    // Display train details
    void display() {
        cout << "Train Number : " << trainNumber << endl;
        cout << "Train Name   : " << trainName << endl;
        cout << "Source       : " << source << endl;
        cout << "Destination  : " << destination << endl;
        cout << "Train Time   : " << trainTime << endl;
    }

    // Static function to get train count
    static int getTrainCount() {
        return trainCount;
    }

    // Getter for searching
    int getNumber() {
        return trainNumber;
    }
};

// Static member initialization
int Train::trainCount = 0;


// ============================
// Railway System Class
// ============================
class RailwaySystem {
private:
    Train t[100];   // Array of objects
    int total;      // Total trains stored

public:
    // Constructor
    RailwaySystem() {
        total = 0;
    }

    // Add new train
    void addTrain() {
        t[total++].input();
        cout << "Train added successfully!\n";
    }

    // Show all trains
    void showAll() {
        if (total == 0) {
            cout << "No train record found!\n";
            return;
        }

        for (int i = 0; i < total; i++) {
            cout << "\nTrain " << i + 1 << " Details:\n";
            t[i].display();
        }
    }

    // Search train by number
    void search(int num) {
        for (int i = 0; i < total; i++) {
            if (t[i].getNumber() == num) {
                cout << "\nTrain Found:\n";
                t[i].display();
                return;
            }
        }
        cout << "Train not found!\n";
    }
};


// ============================
// Main Function (Menu Driven)
// ============================
int main() {

    RailwaySystem rs;
    int choice, num;

    do {
        cout << "\n--- Railway Menu ---\n";
        cout << "1. Add Train\n";
        cout << "2. Show All Trains\n";
        cout << "3. Search Train\n";
        cout << "4. Get Train Count\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            rs.addTrain();
            break;

        case 2:
            rs.showAll();
            break;

        case 3:
            cout << "Enter Train Number: ";
            cin >> num;
            rs.search(num);
            break;

        case 4:
            cout << "Total Train Count : "
                 << Train::getTrainCount() << endl;
            break;

        case 5:
            cout << "Bye Bye 👋\n";
            break;

        default:
            cout << "Wrong choice!\n";
        }

    } while (choice != 5);

    return 0;
}
