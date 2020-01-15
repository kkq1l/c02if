#include<stdio.h>
#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	int n;
	cin >> n;
	if (n >= 1 && n <= 100) {
		if ((n % 10 == 1) && n / 10 != 1) {
			cout << "Вам " << n << " год";
		}
		if ((n < 10 || n>20) && (n % 10 > 1 && n % 10 <= 4)) {
			cout << "Вам " << n << " года";
		}
		if ((n % 10 > 4 || n % 10 == 0) || (n <= 20 && n >= 5)) {
			cout << "Вам " << n << " лет";
		}
	}
	else {
		cout << "ERROR";
	}
}