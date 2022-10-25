#include <iostream>
#include <string>
using namespace std;
int main() {
    const int COVERAGE = 350; // paint covers 350 sq ft per gallon
    const float doorSize = 20;
    const float windowSize = 15;
    int x = 0;
    int y = 0;
    int z = 0;
    int doors = 0;
    int windows = 0;

    // Taking inputs from the user
    cout << "How long is the room in feet? ";
    cin >> x;
    cout << "How wide is the room in feet? ";
    cin >> y;
    cout << "How tall is the room in feet? ";
    cin >> z;
    cout << "How many doors are there? ";
    cin >> doors;
    cout << "How many windows are there? ";
    cin >> windows;

    // Math, not Meth I promise <3
    float totalSqFt = 0;
    float wallsONLY = 0;
    float paintNeeded = 0;
    float paintNeededWalls = 0;
    totalSqFt = x * y * 2 + x * z * 2 + y * z * 2 - doors * doorSize - windows * windowSize;
    wallsONLY = x * z * 2 + y * z * 2 - doors * doorSize - windows * windowSize;
    
    // The output
    paintNeeded = totalSqFt / COVERAGE;
    cout << "The room is " << x << " feet long " << y << " feet wide, " << z << " feet tall, totalling " << totalSqFt << " square feet and needing " << paintNeeded << " gallons of paint." << endl;

    paintNeededWalls = wallsONLY / COVERAGE;
    cout << "The room is " << x << " feet long " << y << " feet wide, " << z << " feet tall, totalling " << wallsONLY << " square feet and needing " << paintNeededWalls << " gallons of paint." << endl;
    return 0;
}