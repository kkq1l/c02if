#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;
	cout << "¬ведите год:" << endl;
	cin >> n;

	if (n>=1 && n<=2200) {
		if (n%4!=0) {
			cout << "NORMAL";
		}
		else if (n%100!=0) {
			cout << "LEAP";
		}
		else {
			if (n % 400 == 0) {
				cout << "NORMAL";
			}
			else {
				cout << "LEAP";
			}
		}
	}
	else {
		cout << "ERROR";
	}

	return 0;
}