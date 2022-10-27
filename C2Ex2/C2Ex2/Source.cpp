#include <iostream>
#include <string>

using namespace std;

float cash = 0;

int main() {
	cout << "How much money do you have" << endl;
	cin >> cash;
	if (cash >= 25) {
		cout << "You can buy the game" << endl;
		cash = cash - 25;
		cout << "You have " << cash << " pounds remaining.";
	}
	else if (cash > 20) {
		cout << "You cannot buy the game! (Maybe beg your mum for more money?)" << endl;
		cash = 25 - cash;
		cout << "You only need " << cash << " pounds more!";
	}
	else {
		cout << "Good luck ever getting that game!" << endl;
		cash = 25 - cash;
		cout << "Good luck getting that " << cash << " pounds you need!";
	}

	return 0;
}