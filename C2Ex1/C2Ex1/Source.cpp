#include <iostream>
#include <string>

using namespace std;

int age = 0;

int main() {
	cout << "Please input your age" << endl;
	cin >> age;
	if (age > 17) {
		cout << "You can vote! (If you register)" << endl;
	}
	else if (age > 15) {
		cout << "You cannot vote! (But still have to register!)" << endl;
	}
	else {
		cout << "You cannot vote! (But still have to live with the result!)" << endl;
	}

	return 0;
}