#include <iostream>

using namespace std;


int main() {
	struct Point
	{
		int x;
		int y;
	};

	int n, wynik = 0;
	Point jas;
	cin >> jas.x;
	cin >> jas.y;
	cin >> n;
	while (n--) {
		Point wspolrzedne;
		cin >> wspolrzedne.x >> wspolrzedne.y;
		if ((wspolrzedne.x >= 0 && wspolrzedne.x <= jas.x && wspolrzedne.y >= 0 && wspolrzedne.y <= jas.y) &&
			(jas.x * wspolrzedne.y == jas.y * wspolrzedne.x)) {
			wynik++;
		}
	}

	cout << wynik;
	
	return 0;
}