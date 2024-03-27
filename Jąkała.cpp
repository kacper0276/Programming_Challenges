#include <iostream>

using namespace std;

bool czyLiteraWTablicy(char litera, char* tablica, int k) {
	for (int i = 0; i < k; i++) {
		if (tablica[i] == litera)
			return true;
	}

	return false;
}

string jakanieSie(string napis, char* tablica, int k) {
	string wynik = "";
	for (char c : napis) {
		wynik += c;
		if (czyLiteraWTablicy(c, tablica, k)) {
			wynik += c;
		}
	}

	return wynik;
}

int main() {
	int k;
	string napis;
	cin >> k;

	if (k >= 1 && k <= 26) {
		char* tab = new char[k];
		for (int i = 0; i < k; i++) {
			cin >> tab[i];
		}
		cin >> napis;

		cout << jakanieSie(napis, tab, k);
	}

	return 0;
}