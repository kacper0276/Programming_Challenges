#include <iostream>
#include <map>

using namespace std;

int czyZagramy(map<int, bool> mapa) {
	int wynik = 0;

	for (auto& el : mapa) {
		if (el.second == true) {
			wynik += 1;
		}
	}

	return wynik;
}

int main() {
	int n, numer;
	string wiadomosc;
	map<int, bool> mapa;
	cin >> n;

	while (n--) {
		cin >> numer >> wiadomosc;
		if (wiadomosc == "bede" || wiadomosc == "ja" || wiadomosc == "gram") {
			mapa[numer] = true;
		}
		else if (wiadomosc == "odpadam" || wiadomosc == "rezygnuje") {
			mapa[numer] = false;
		}
	}

	int wynik = czyZagramy(mapa);

	if (wynik >= 10) {
		cout << "Gramy! Bedzie nas " << wynik;
	}
	else {
		cout << "Nie gramy :( Jest nas tylko " << wynik;
	}

	return 0;
}