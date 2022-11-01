#include <iostream>
using namespace std;

int cTime = 0; //declare and initialise variable for time

int main() {

    cout << "Please input the current hour numerically" << endl;
    cin >> cTime;

    if (cTime < 4) {
        cout << "Good Night" << endl;
    }

    else if (cTime < 12) {
        cout << "Good Morning" << endl;
    }
    else if (cTime >= 12 and cTime < 19) { //check if 'currentTime' is greater or equal to 12
        cout << "Good Afternoon" << endl; //output PM message
    }

    else if (cTime >= 19 and cTime < 22) {
        cout << "Good Evening" << endl;
    }

    else if (cTime >= 22) {
        cout << "Good Night" << endl;
    }

    else {
        cout << "Invalid Time"; //output fail message
    }
    return 0;
}