#include<stdio.h>
#include<iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "rus");

	int n;
	cin >> n;
	if (n >= 1 && n <= 100) {
		if ((n % 10 == 1) && n / 10 != 1) {
			cout << "��� " << n << " ���";
		}
		if ((n < 10 || n>20) && (n % 10 > 1 && n % 10 <= 4)) {
			cout << "��� " << n << " ����";
		}
		if ((n % 10 > 4 || n % 10 == 0) || (n <= 20 && n >= 5)) {
			cout << "��� " << n << " ���";
		}
	}
	else {
		cout << "ERROR";
	}
}