#include <iostream>
#include <string>
using namespace std;

string input = "Null";
int row = 0;
int col = 1;
int total = 0;
string even[4] = {"b", "d", "f", "h"};

int main() {
	cout << "Please input your position in the Column/Row format" << endl;
	cin >> input;

	for (int i = 0; i < 4; i++) { // loop to pull the check against the array
		if (input.substr(0, 1) == even[i]) {
			col = 0;
		}
	}
	row = stoi(input.substr(1, 3)); // pulls a single position from the string and then turns it into a number
	total = row + col;

	if (total % 2 == 0) { // modulus check against a remainder because all black/white spaces must be even/odd respectively.
		cout << "Your space is Black";
	}
	else {
		cout << "Your space is White";
	}
	return 0;
}