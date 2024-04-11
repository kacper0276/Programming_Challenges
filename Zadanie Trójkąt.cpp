#include <iostream>

using namespace std;

void czyMoznaZbudowac(int32_t a, int32_t b, int32_t c) {
	if (a > b && a > c) {
		if ((b + c) > a) {
			cout << "TAK";
		}
		else {
			cout << "NIE";
		}
	}
	else if (b > a && b > c) {
		if ((a + c) > b) {
			cout << "TAK";
		}
		else {
			cout << "NIE";
		}
	}
	else {
		if ((b + a) > c) {
			cout << "TAK";
		}
		else {
			cout << "NIE";
		}
	}
}

int main() {
	int32_t a, b, c;
	cin >> a >> b >> c;

	czyMoznaZbudowac(a, b, c);

	return 0;
}