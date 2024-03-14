#include <iostream>

using namespace std;

int main() {
	const double mile = 1.609344;
	int k;

	cin >> k;
	double wynik = k / mile;

	if (wynik < 300) {
		cout << "NIE";
	}
	else if (wynik >= 300 && wynik < 500) {
		cout << "SPRAWDZIMY TWOJE OBECNE BUTY";
	}
	else {
		cout << "TAK";
	}

	return 0;
}