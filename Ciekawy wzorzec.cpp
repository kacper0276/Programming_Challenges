#include <iostream>

using namespace std;

int funkcjaDoZadania(string napis, string wzorzec) {
	int currentIndex = 0, firstLetter = -1;

	for (int i = 0; i < napis.size(); i++) {
		if (napis[i] == wzorzec[0]) {
			currentIndex++;
			for (int j = i + 2; j < napis.size(); j += 2) {				
				if (napis[j] == wzorzec[currentIndex]) {
					currentIndex++;

					if (currentIndex == wzorzec.size()) {
						return i;
					}
				}

				else {
					currentIndex = 0;
					break;
				}
			}
		}
	}

	return -1;
}

int main() {
	string napis, wzorzec;

	cin >> napis;
	cin >> wzorzec;

	int wynik = funkcjaDoZadania(napis, wzorzec);

	if (wynik == -1) {
		cout << "brak";
	}
	else {
		cout << ++wynik;
	}

	return 0;
}