////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Lecture 9 - Activity
////

#include <iostream>
using namespace std;

struct myTime {
	int hours;
	int minutes;
};
// Cannot call for "time" function as it already has a use
// Used "myTime" instead
int main() {
	myTime startTime, endTime;
	startTime.hours;
	startTime.minutes;
	endTime.hours;
	endTime.minutes;
	// Could also declare time to reduce code

	cout << "Enter starting time hour: ";
	cin >> startTime.hours;
	cout << "Enter starting time minute : ";
	cin >> startTime.minutes;
	cout << "Enter end time hour: ";
	cin >> endTime.hours;
	cout << "Enter end time minute : ";
	cin >> endTime.minutes;

	if ((startTime.minutes < 10) & (endTime.minutes < 10)) {
		cout << "You started class at " << startTime.hours << ":0" << startTime.minutes << endl;
		cout << "You ended class at " << endTime.hours << ":0" << endTime.minutes << endl;
	}
	else if (startTime.minutes < 10) {
		cout << "You started class at " << startTime.hours << ":0" << startTime.minutes << endl;
		cout << "You ended class at " << endTime.hours << ":" << endTime.minutes << endl;
	}
	else if (endTime.minutes < 10) {
		cout << "You started class at " << startTime.hours << ":" << startTime.minutes << endl;
		cout << "You ended class at " << endTime.hours << ":0" << endTime.minutes << endl;
	}
	else {
		cout << "You started class at " << startTime.hours << ":" << startTime.minutes << endl;
		cout << "You ended class at " << endTime.hours << ":" << endTime.minutes << endl;
	}

	system("pause");
	return 0;
}