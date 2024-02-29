#include <iostream>

using namespace std;

int main() {
	
	int s, n;
	

	cin >> s >> n;
	char znak;
	char** basic = new char* [s];
	char** result = new char* [n];

	// Wczytywanie starego zaproszenia
	for (int i = 0; i < s; i++) {
		basic[i] = new char[s];
		for (int j = 0; j < s; j++) {
			cin >> znak;
			basic[i][j] = znak;
		}
	}

	char ramka = basic[0][0];
	char wypelnienie = basic[1][1];

	for (int i = 0; i < n; i++) {
		result[i] = new char[n];
		for (int j = 0; j < n; j++) {
			if (i == 0) {
				result[i][j] = ramka;
			}
			else if (j == 0) {
				result[i][j] = ramka;
			}
			else if (i == n - 1) {
				result[i][j] = ramka;
			}
			else if (j == n - 1) {
				result[i][j] = ramka;
			}
			else {
				result[i][j] = wypelnienie;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << result[i][j];
		}
		cout << endl;
	}
}