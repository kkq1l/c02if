#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;

	cin >> n;

	if (n == 0) {
		cout << "nought";
	}
	else if (n == 1) {
		cout << "one";
	}
	else if (n == 2) {
		cout << "two";
	}
	else if (n == 3) {
		cout << "three";
	}
	else if (n == 4) {
		cout << "four";
	}
	else if (n == 5) {
		cout << "five";
	}
	else if (n == 6) {
		cout << "six";
	}
	else if (n == 7) {
		cout << "seven";
	}
	else if (n == 8) {
		cout << "eight";
	}
	else if (n == 9) {
		cout << "nine";
	}
	else {
		cout << "ERROR";
	}


	return 0;
}