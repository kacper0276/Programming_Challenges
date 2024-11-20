#include <iostream>

using namespace std;

int NWD(int a, int b) {
	int pom;

	while (b != 0) {
		pom = b;
		b = a % b;
		a = pom;
	}

	return a;
}

int NWW(int a, int b) {
	return a / NWD(a, b) * b;
}

int main() {
	// a1/a2, b1/b2
	int a1, a2, b1, b2;

	cin >> a1 >> a2 >> b1 >> b2;

	int wspolnyMianownik = NWW(a2, b2);

	int licznik = a1 * (wspolnyMianownik / a2) + b1 * (wspolnyMianownik / b2);

	int nwd = NWD(licznik, wspolnyMianownik);
	licznik /= nwd;
	wspolnyMianownik /= nwd;

	cout << licznik << "/" << wspolnyMianownik;

	return 0;
}