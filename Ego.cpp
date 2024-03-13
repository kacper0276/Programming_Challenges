#include <iostream>

using namespace std;

string ktoKtoryDzien(int n) {
	if ((n >= 1 && n <= 7) || (n >= 43 && n <= 49)) {
		return "DAWID";
	}
	else if ((n >= 8 && n <= 14) || (n >= 50 && n <= 56)) {
		return "GRZESIEK";
	}
	else if ((n >= 15 && n <= 21) || (n >= 57 && n <= 63)) {
		return "MACIEK";
	}
	else if ((n >= 22 && n <= 28) || (n >= 64 && n <= 70)) {
		return "MARCIN";
	}
	else if ((n >= 29 && n <= 35)) {
		return "MARIUSZ";
	}
	else if ((n >= 36 && n <= 42)) {
		return "RAFAL";
	}
}

int main() {
	int t, n;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;

		cout << ktoKtoryDzien(n) << endl;
	}

	return 0;
}