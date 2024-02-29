#include <iostream>

using namespace std;

int main()
{
	const int konc_waga = 100;
	int n;
	cin >> n;

	if (n >= 40 && n <= 100) {
		int paczki = konc_waga - n;

		cout << paczki;
	}

	return 0;
}