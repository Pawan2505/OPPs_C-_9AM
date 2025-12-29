#include <iostream>
#include <string>
using namespace std;

/*
================================================
Base Class : Vehicle
================================================
*/
class Vehicle {
protected:
    int vehicleID;
    string manufacturer;
    string model;
    int year;

public:
    static int totalVehicles;

    // Default constructor
    Vehicle() {
        totalVehicles++;
    }

    // Parameterized constructor
    Vehicle(int id, string mfg, string mdl, int y) {
        vehicleID = id;
        manufacturer = mfg;
        model = mdl;
        year = y;
        totalVehicles++;
    }

    // Virtual destructor (IMPORTANT for polymorphism)
    virtual ~Vehicle() {
        totalVehicles--;
    }

    int getVehicleID() {
        return vehicleID;
    }

    // Virtual function (runtime polymorphism)
    virtual void display
