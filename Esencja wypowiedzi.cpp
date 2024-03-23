#include <iostream>

using namespace std;

bool czyEmotka(string napis) {
	return napis == ":)" || napis == ":(" || napis == ";)" || napis == ":D" || napis == ":P" || napis == "xD" || napis == ":>" || napis == "<3";
}

int main() {
	int n, m;

	cin >> n;
	string** tablica = new string* [n];
	int* rozmiary = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> m;
		rozmiary[i] = m;
		tablica[i] = new string[m];
		for (int j = 0; j < m; j++) {
			cin >> tablica[i][j];
		}
	}

	

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < rozmiary[i]; j++) {
			if (!czyEmotka(tablica[i][j])) {
				cout << tablica[i][j] << " ";
			}
		}
		cout << endl;
	}
  

	return 0;
}