#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;

	cin >> n;

	if (n % 10 == 1) {
		cout << "Вам " << n << " год";
	}
	else if (n % 10 == 2 || 3 || 4) {
		cout << "Вам " << n << " года";
	}
	else  if (n % 10 == 0 || 5 || 6 || 7 || 8 || 9) {
		cout << "Вам " << n << " лет";
	}


	return 0;
}