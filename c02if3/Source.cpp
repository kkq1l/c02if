#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int n;

	cin >> n;

	if (n % 10 == 1) {
		cout << "��� " << n << " ���";
	}
	else if (n % 10 == 2 || 3 || 4) {
		cout << "��� " << n << " ����";
	}
	else  if (n % 10 == 0 || 5 || 6 || 7 || 8 || 9) {
		cout << "��� " << n << " ���";
	}


	return 0;
}