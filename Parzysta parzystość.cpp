#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool czyParzysta(long long int liczba) {
	return liczba % 2 == 0;
}

bool czyPrzestawisz(long long int liczba) {
	string str = to_string(liczba);
	sort(str.begin(), str.end());

	do {
		long long int l = stoll(str);
		if (l % 2 == 0) {
			return true;
		}
	} while (next_permutation(str.begin(), str.end()));

	return false;
}

int main() {
	long long int liczba;
	cin >> liczba;

	if (czyParzysta(liczba)) {
		cout << "Tak";
	}
	else {
		if (czyPrzestawisz(liczba)) {
			cout << "Tak";
		}
		else {
			cout << "Nie";
		}
	}

	return 0;
}