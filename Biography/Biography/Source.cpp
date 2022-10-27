#include <iostream>
#include <string>

using namespace std;

int main() {
	string name = "null";
	string town = "null";
	int age = 0;

	cout << "Your Name: ";
	getline(cin, name);
	cout << "Your Town: ";
	getline(cin, town);
	cout << "Your Age: ";
	cin >> age;

	while (cin.fail()) {
		cin.clear();
		cin.ignore(256000, '\n');
		cout << "Please input your age in years, using numbers." << endl;
		cin >> age;
	}
	cout << "Your name is " << name << endl << "Your town is " << town << endl << "You are " << age << " years old";

	return 0;
}