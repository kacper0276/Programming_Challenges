#include <iostream>
#include <iomanip> 
#include <vector>

using namespace std;

int policzUczestników(vector<bool> uczestnicy) {
	int liczbaUczestników = 0;

	for (auto uczestnik : uczestnicy) {
		if (uczestnik == true) {
			liczbaUczestników++;
		}
	}

	return liczbaUczestników;
}

int main() {
	int n, m;
	char typAkcji;
	double liczbaDoAkcji;

	cin >> n >> m;
	vector<double> doZapłaty(n, 0);
	vector<bool> czyNaWycieczce(n, true);

	for (int i = 0; i < m; i++) {
		cin >> typAkcji >> liczbaDoAkcji;

		if (typAkcji == 'Z') {
			double kwotaNaGłowe = liczbaDoAkcji / policzUczestników(czyNaWycieczce);
			for (int j = 0; j < n; j++) {
				if (czyNaWycieczce[j]) {
					doZapłaty[j] += kwotaNaGłowe;
				}
			}
		}
		else if (typAkcji == 'W') {
			czyNaWycieczce[liczbaDoAkcji - 1] = false;
		}
	}

	for (auto kwota : doZapłaty) {
		cout << fixed << setprecision(5) << kwota << " ";
	}


}