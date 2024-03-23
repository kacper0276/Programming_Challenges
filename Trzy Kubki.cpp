#include <iostream>

using namespace std;

void swap(int* tab, int l1, int l2) {
	int help = tab[l1 - 1];
	tab[l1 - 1] = tab[l2 - 1];
	tab[l2 - 1] = help;
}

int main() {
	int n, q, l1, l2;
	cin >> n;
	int* pozycjeKubkow = new int[n];
	for (int i = 0; i < n; i++) {
		pozycjeKubkow[i] = i + 1;
	}

	cin >> q;

	while (q--) {
		cin >> l1 >> l2;
		swap(pozycjeKubkow, l1, l2);
	}

	for (int i = 0; i < n; i++) {
		cout << pozycjeKubkow[i] << " ";
	}

	return 0;
}