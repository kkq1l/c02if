#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a;

	cin >> a;

	switch (a)
	{
	case 2:
		cout << "�������������������";
		break;
	case 3:
		cout << "�����������������";
		break;
	case 4:
		cout << "������";
		break;
	case 5:
		cout << "�������";
		break;
	default:
		cout << "ERROR";
		break;
	}

	return 0;
}