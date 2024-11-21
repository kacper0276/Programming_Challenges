#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* tab = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> tab[i];
	}

	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}

	return 0;
}