#include<iostream>
#include<string>

using namespace std;

float tempInC = 0;
float tempInF = 0;
string typeInput = "Null";
string cel[6] = { "Cel", "cel", "C", "c", "Celcius", "celcius" };
string fah[6] = { "Fah", "fah", "F", "f", "Fahrenheit", "fahrenheit" };

int main() {
	cout << "Temperature Converter Initiated." << endl << "Please input whether you desire to convert to Celsius (C) or Fahrenheit (F) below." << endl;

	while (true) {
		cin >> typeInput;

		if (typeInput == "c" or typeInput == "cel" or typeInput == "celsius" or typeInput == "f" or typeInput == "fah" or typeInput == "fahrenheit") {
			break;
		}

		cout << "Input error. Please input the temperature you wish to convert to below." << endl;
	}
	for (int i = 0; i < 6; i++) {
		if (typeInput == cel[i]) {
			cout << "Converting Fahrenheit to Celsius." << endl;
			cout << "Please input temperature in Fahrenheit below" << endl;
			cin >> tempInF;
			while (cin.fail()) {
				cin.clear();
				cin.ignore(256000, '\n');
				cout << "Please input the temperature in Fahrenheit using digits below" << endl;
				cin >> tempInF;
			}
			tempInC = tempInF - 32 * 0.5556;
			cout << "The temperature in Celsius is " << tempInC << " degrees" << endl;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (typeInput == fah[i]) {
			cout << "Converting Celsius to Fahrenheit." << endl;
			cout << "Please input temperature in Celsius below" << endl;
			cin >> tempInF;
			while (cin.fail()) {
				cin.clear();
				cin.ignore(256000, '\n');
				cout << "Please input the temperature in Fahrenheit using digits below" << endl;
				cin >> tempInC;
			}
			tempInF = tempInC * 1.8 + 32;
			cout << "The temperature in Celsius is " << tempInC << " degrees" << endl;
		}
	}
	return 0;
}