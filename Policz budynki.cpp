#include <iostream>
#include <map>

using namespace std;



int main() {
	map<int, string> mapa;
	int n;
	int l;
	string nazwisko;

	cin >> n;

	while (n--) {
		cin >> l >> nazwisko;
		mapa[l] = nazwisko;
	}

	cout << mapa.size();

	return 0;
}