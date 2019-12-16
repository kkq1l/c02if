#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	char n;

	cin >> n;

	if (n >= '0' && n <= '9')
		cout << "DIGIT";
	else if (n >= 'A' && n <= 'Z')
		cout << "CAPITAL";
	else if (n >= 'a' && n <= 'z')
		cout << "LOWERCASE";
	else cout << "NON - ALPHANUMERIC";


	return 0;
}