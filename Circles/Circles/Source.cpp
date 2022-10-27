#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

float radius = 0;
float circ = 0;
float area = 0;

int main() {
	cout << "What is the radius of your circle?" << endl;
	cin >> radius;

	area = (radius * radius) * M_PI;
	circ = (radius * 2) * M_PI;

	cout << "The area is " << area << endl;
	cout << "The circumference is " << circ << endl;

	return 0;
}