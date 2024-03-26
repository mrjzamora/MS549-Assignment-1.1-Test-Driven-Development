#include <iostream>
#include <cassert>

// Defining the conversions here
const double kmToMilesFactor = 0.621371;
const double milesToKmFactor = 1.60934;


double kilometersToMiles(double kilometers);
double milesToKilometers(double miles);

// The main function
int main() {
    // Here I am setting up the testing with cassert statement
    assert(kilometersToMiles(1) == 0.621371);
    assert(milesToKilometers(1) == 1.60934);

    std::cout << "All tests passed.\n";

    int choice;
    do {
        std::cout << "1. Convert Kilometers to Miles\n";
        std::cout << "2. Convert Miles to Kilometers\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        double distance;
        switch (choice) {
        case 1:
            std::cout << "Enter distance in kilometers: ";
            std::cin >> distance;
            std::cout << distance << " km is " << kilometersToMiles(distance) << " miles.\n";
            break;
        case 2:
            std::cout << "Enter distance in miles: ";
            std::cin >> distance;
            std::cout << distance << " miles is " << milesToKilometers(distance) << " kilometers.\n";
            break;
        }
    } while (choice != 3);

    return 0;
}

// Function definitions below
double kilometersToMiles(double kilometers) {
    return kilometers * kmToMilesFactor;
}

double milesToKilometers(double miles) {
    return miles * milesToKmFactor;
}
