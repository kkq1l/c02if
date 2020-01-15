#include<stdio.h>
#include<Math.h>
#include<iostream>

using namespace std;

int main() {
	float a1, b1, c1, a2, b2, c2, s1, s2, x, y;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	x = -(c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
	y = -(a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
	s1 = a1 * c2 - a2 * c1;
	s2 = b1 * c2 - b2 * c1;
	if ((a1 == 0 && b1 == 0) || (a1 == 0 && b2 == 0)) {
		cout << "ERROR";
	}
	else {
		if ((a1 * b2 - a2 * b1) == 0) {
			if (fabsf(s1 - s2) <= 0.00001) {
				cout << "SAME";
			}
			else {
				cout << "PARALLEL";
			}
		}
		else {
			cout << x << y;
		}
	}

}