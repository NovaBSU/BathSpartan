#include <iostream>
#include <stdlib.h>

using namespace std;

int cpuNumber = 0;
float playerNumber = 0;

int main() {
	cpuNumber = rand() % 100;

	cout << "Please Enter Your Number Below" << endl;
	while (playerNumber != cpuNumber) {
		cin >> playerNumber;
		
		while (cin.fail() or playerNumber > 100) {
			cin.clear();
			cin.ignore(256000, '\n');
			cout << "Invalid Number" << endl;
			cin >> playerNumber;
		}
		if (playerNumber < cpuNumber) {
			cout << "Your Number Is Lower Than Mine" << endl;
		}
		else if (playerNumber > cpuNumber) {
			cout << "Your Number Is Higher Than Mine" << endl;
		}
		else {
			cout << "Congratulations, you win!" << endl;
			break;
		}
	}
	return 0;
}