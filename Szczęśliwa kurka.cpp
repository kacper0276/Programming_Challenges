#include <iostream>

using namespace std;

double jakaCena(int ile) {
	if (ile >= 900 && ile <= 999) {
		return 0.45;
	} 
	if (ile >= 800 && ile <= 899) {
		return 0.4;
	}
	if (ile >= 700 && ile <= 799) {
		return 0.35;
	}
	if (ile >= 600 && ile <= 699) {
		return 0.3;
	}
	if (ile >= 500 && ile <= 599) {
		return 0.25;
	}
	if (ile >= 400 && ile <= 499) {
		return 0.2;
	}
	if (ile >= 300 && ile <= 399) {
		return 0.15;
	}
	if (ile >= 200 && ile <= 299) {
		return 0.1;
	}
	if (ile >= 100 && ile <= 199) {
		return 0.05;
	}
	if (ile >= 0 && ile <= 99) {
		return 0.0;
	}
}

int main() {
	double wynik = 0.0;
	double cena = 0.5;
	int ile;
	cin >> ile;

	if (ile >= 1000) {
		wynik = cena * 1000;

		wynik += (ile - 1000);
	}
	else {
		cena = jakaCena(ile);
		wynik = ile * cena;
	}

	cout << wynik;


	return 0;
}