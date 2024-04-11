#include <iostream>

using namespace std;

int main() {
	// zmienna int ktora na pewno ma 32 bity
	int32_t x, y;

	cin >> x >> y;

	if (x == 0 && y == 0) {
		cout << "0";
	}
	else if (x == 0 && y != 0) {
		cout << "OY";
	}
	else if (x != 0 && y == 0) {
		cout << "OX";
	}
	else {
		if (x > 0 && y > 0) {
			cout << "I";
		}
		else if (x < 0 && y > 0) {
			cout << "II";
		}
		else if (x < 0 && y < 0) {
			cout << "III";
		}
		else if (x > 0 && y < 0) {
			cout << "IV";
		}
	}

	return 0;
}