#include <iostream>

using namespace std;

int main() {
	// n - ilość rzędów, m - ilość kolumn, k - ile kawałków czekolady
	int n, m, k;

	cin >> n >> m >> k;

	if ((k % m == 0 && k / m <= n) || (k % n == 0 && k / n <= m)) {
		cout << "TAK" << endl;
	}
	else {
		cout << "NIE" << endl;
	}

	return 0;
}