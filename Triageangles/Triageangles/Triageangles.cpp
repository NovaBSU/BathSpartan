#include <iostream>
#include <string>

using namespace std;

float sideOne = 0;
float sideTwo = 0;
float sideThree = 0;

void triangleCheck() {
	while ((sideOne + sideTwo < sideThree) and (sideTwo + sideThree < sideOne) and (sideThree + sideOne < sideTwo)) {
		cout << "Sorry, you input an invalid dataset" << endl;
		cout << "Side One Please" << endl;
		cin >> sideOne;
		cout << "Side Two Please" << endl;
		cin >> sideTwo;
		cout << "Side Three Please" << endl;
		cin >> sideThree;
	}
}


int main() {
	cout << "Side One Please" << endl;
	cin >> sideOne;
	cout << "Side Two Please" << endl;
	cin >> sideTwo;
	cout << "Side Three Please" << endl;
	cin >> sideThree;

	while (cin.fail()) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Sorry, you input an invalid number" << endl;
		cout << "Side One Please" << endl;
		cin >> sideOne;
		cout << "Side Two Please" << endl;
		cin >> sideTwo;
		cout << "Side Three Please" << endl;
		cin >> sideThree;
	}

	triangleCheck();

	if ((sideOne == sideTwo) and (sideTwo == sideThree)) {
		cout << "You have an Equilateral Triangle" << endl;
	}

	else if ((sideOne == sideTwo) or (sideTwo == sideThree) or (sideOne == sideThree)) {
		cout << "You have an Isosceles or Right Angle Isosceles triangle" << endl;
	}

	else {
		cout << "You have a Scalene triangle" << endl;
	}
	return 0;
}