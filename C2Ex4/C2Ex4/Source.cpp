#include <iostream>
#include <string>

using namespace std;

string frenPlays[11] = {"guitar", "Guitar", "gtar", "Gtar", "GUITAR", "GTAR", "drums", "Drums", "DRUMS", "dms", "DMS"};
string fndPlays = "null";
string yesArray[8] = { "y", "Y", "yes", "Yes", "YES", "ye", "Ye", "YE" };
string yes = "null";
bool success = false;
bool musicFriend = false;

int main() {
	cout << "Do you have a musical friend" << endl;
	cin >> yes;

	for (int i = 0; i < 8; i++) {
		if (yes == yesArray[i]) {
			musicFriend = 1;
		}
	}

	if (musicFriend == true) {
		cout << "What do they play?" << endl;
		cin >> fndPlays;
		for (int i = 0; i < 11; i++) {
			if (fndPlays == frenPlays[i]) {
				cout << "You can start a band!" << endl;
				success = 1;
			}
		}
		if (success == 0) {
			cout << "your friend doesn't play the right instrument!" << endl;
		}
	}
	else {
		cout << "You don't have a musical friend";
	}
	return 0;
}