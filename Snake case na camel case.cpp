#include <iostream>

using namespace std;

int main() {
	string zdanie, wynik = "";
	cin >> zdanie;
	char poprzedni = zdanie[0];

	wynik = zdanie[0];

	for (int i = 1; i < zdanie.length(); i++) {
		if (poprzedni == '_') {
			wynik += zdanie[i] - 32;
		}
		else if (zdanie[i] != '_') {
			wynik += zdanie[i];
		}
		poprzedni = zdanie[i];
	}
	
	cout << wynik;

	return 0;
}