// Alphanzo Moore

//CIS-5 Online

// Today's Date

// Lab 2A: Alphanzo Moore - <Hourly Wages>

#include <iostream>
using namespace std;

int main() {
    double regularWages, basePayRate = 18.25, regularHours = 40.0;
    double overtimeWages, overtimePayRate = 27.78, overtimeHours = 10.0;
    double totalWages;

    // Calculate the regular wages
    regularWages = basePayRate * regularHours;

    // Calculate the overtime wages
    overtimeWages = overtimePayRate * overtimeHours;

    // Calculate the total wages
    totalWages = regularWages + overtimeWages;

    // Display the total wages
    cout << "Wages for this week are: $" << totalWages << endl;

    return 0;
}
