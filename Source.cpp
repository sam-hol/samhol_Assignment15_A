/*Sam Hollinger
CIS 1202-NR1
Assignment 15-A Error Handling
*/

#include <iostream>

using namespace std;

char character(char start, int offset);

int main() {
	//char letter = 'a';
	//int offset = 1;
	//cout << letter << " " << char(letter + 1);
	char newChar;

	try {
		cout << "\nA and 1";
		newChar = character('A', 1);
		cout << "\n" << newChar;
	}
	catch (string ncErr) {
		cout << ncErr;
	}
	catch (int oorErr) {
		cout << "\nError: Character with offset is out of range.";
	}

	try {
		cout << "\n\n* and 0: ";
		newChar = character('*', 0);
		cout << "\n" << newChar;

	}
	catch (string ncErr) {
		cout << ncErr;
	}
	catch (int oorErr) {
		cout << "\nError: Character with offset is out of range.";
	}

	try {
		cout << "\n\n z and 1: ";
		newChar = character('z', 1);
		cout << "\n" << newChar;

	}
	catch (string ncErr) {
		cout << ncErr;
	}
	catch (int oorErr) {
		cout << "\nError: Character with offset is out of range.";
	}

	try {
		cout << "\n\n z and -1: ";
		newChar = character('z', -1);
		cout << "\n" << newChar;

	}
	catch (string ncErr) {
		cout << ncErr;
	}
	catch (int oorErr) {
		cout << "\nError: Character with offset is out of range.";
	}

	cout << "\n\n";
	system("pause");
	return 0;
}

char character(char start, int offset) {
	bool valid = false;
	char newChar;
	int oorErr = 0;
	string ncErr = "\nError: Invalid Character.";

	//cout << "\nIN CHARACTER FUNCTION: " << start << " and " << offset;

	if (int(start) >= 65 && int(start) <= 90) valid = true;
	if (int(start) >= 97 && int(start) <= 122) valid = true;
	if (!valid) throw ncErr;

	newChar = char(start + offset);
	valid = false;

	if (int(start + offset) >= 65 && int(start + offset) <= 90) valid = true;
	if (int(start + offset) >= 97 && int(start + offset) <= 122) valid = true;
	if (!valid) throw oorErr;

	return newChar;
}

/*
A-Z = 65-90
a-z = 97-122
*/