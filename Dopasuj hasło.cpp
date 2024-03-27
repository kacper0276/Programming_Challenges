#include <iostream>

using namespace std;

bool funkcjaDoZadania(string haslo, string zaszyfrowaneHaslo) {
	int index = 0;
	for (char c : zaszyfrowaneHaslo) {
		if (c != '*') {
			if (index >= haslo.size() || c != haslo[index]) {
				return false;
			}
		}
			index++;
	}

	return index == haslo.size();
}

int main() {
	int n;
	string haslo, zaszyfrowaneHaslo;
	cin >> n;

	while (n--) {
		cin >> haslo;
		cin >> zaszyfrowaneHaslo;

		if (funkcjaDoZadania(haslo, zaszyfrowaneHaslo)) {
			cout << "ok" << endl;
		}
		else {
			cout << "error" << endl;
		}
	}

	return 0;
}