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

	for (int i = 0; i < 4; i++) {
		if (input.substr(0, 1) == even[i]) {
			col = 0;
		}
	}
	row = stoi(input.substr(1, 2));
	total = row + col;

	if (total % 2 == 0) {
		cout << "Your space is Black";
	}
	else {
		cout << "Your space is White";
	}
	return 0;
}