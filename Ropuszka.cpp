#include <iostream>

using namespace std;

int main() {
	int a, b, n;

	cin >> a >> b >> n;

	if (a >= 1 && b >= 1 && a <= 30 && b <= 30 && a != b && n >= 1 && n <= 365) {
		if (n == 33) {
			cout << "WRACAJ";
		}
		else if (a > b) {
			cout << "W PRAWO";
		}
		else {
			cout << "W LEWO";
		}
	}

	return 0;
}