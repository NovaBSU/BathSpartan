#include <iostream>
#include <string>

using namespace std;

float height = 0;
int age = 0;

int main() {
	cout << "How tall are you?" << endl;
	cin >> height;
	cout << "How old are you?" << endl;
	cin >> age;

	if (age >= 5 and height >= 0.6) {
		cout << "You can ride";
	}
	else if (age >= 5) {
		cout << "You are too short to ride";
	}
	else if (height >= 0.6) {
		cout << "You are too young to ride";
	}
	else if (height < 0.6 and age < 5) {
		cout << "You are too short and too young to ride";
	}
	else {
		cout << "Error. Please contact customer support";
	}
	return 0;
}