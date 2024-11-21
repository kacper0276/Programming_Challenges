#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* tab = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}

	cout << tab[1] << " " << tab[2] << " " << tab[3] << endl;

	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}

	return 0;
}