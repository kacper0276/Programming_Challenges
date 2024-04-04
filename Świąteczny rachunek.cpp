#include <iostream>
#include <string>

using namespace std;

int ileWydal(string zdanie) {
	int wynik = 0;
	string cyfry = "";

	for (int i = 0; i < zdanie.length(); i++) {
		if (isdigit(zdanie[i])) {
			cyfry = cyfry + zdanie[i];
		}
		else if (cyfry != "") {
			int liczba = stoi(cyfry);
			wynik += liczba;
			cyfry = "";
		}
	}

	if (cyfry != "") {
		int liczba = stoi(cyfry);
		wynik += liczba;
	}

	return wynik;
}

int main() {
	string zdanie = "";
	getline(cin, zdanie);

	cout << ileWydal(zdanie);

	return 0;
}