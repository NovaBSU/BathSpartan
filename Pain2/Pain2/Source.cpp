#include <iostream>
#include <string>

using namespace std;

// This is exercise 3

int main() {
	int x;
	cout << "What is your number? "; // talk to user
	cin >> x; // take input
	if (x == 25) {
		cout << "Your Number is 25";
	}
	else if(x < 25) {
		cout << "Your Number is less than 25";
	}
	else {
		cout << "Your Number is greater than 25";
	}

	return 0;
	

}