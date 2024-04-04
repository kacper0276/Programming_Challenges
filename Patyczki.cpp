#include <iostream>
#include <map>

using namespace std;

int ileTrojkatowRownobocznych(map<int, int> mapa) {
	int wynik = 0;
	for (auto el : mapa) {
		while (el.second >= 0) {
			if (el.second >= 3) {
				wynik++;
			}
			el.second -= 3;
		}
	}

	return wynik;
}

int main() {
	int n, liczba;
	map<int, int> mapa;
	cin >> n;

	while (n--) {
		cin >> liczba;
		mapa[liczba]++;
	}

	cout << ileTrojkatowRownobocznych(mapa);

	return 0;
}