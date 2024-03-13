#include <iostream>

using namespace std;

int main() {
	int n;
	int wynik = 0;
	int polaczoneOsoby = 0;
	int l, poprzednia, helpCounter = 1;
	cin >> n;
	if (n >= 2 && n <= 10) {
		cin >> l;
		if (l >= 1 && l <= 10) {
			poprzednia = l;
			for (int i = 1; i < n; i++) {
				cin >> l;
				if (l >= 1 && l <= 10) {
					if (poprzednia == l) {
						helpCounter++;
					}
					else {
						if (polaczoneOsoby != 0 || helpCounter != 1) {
							wynik += polaczoneOsoby + helpCounter;	
						}
						polaczoneOsoby += helpCounter;
						poprzednia = l;
						helpCounter = 1;
					}
				}
			}
		}
		wynik += polaczoneOsoby + helpCounter;

		cout << wynik;
	}

	return 0;
}