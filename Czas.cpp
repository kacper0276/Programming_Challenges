#include <iostream>

using namespace std;

void funkcjaDoZadania(int t) {
	int godziny = 0, minuty = 0, sekundy = 0;

	godziny = t / 3600;
	t = t % 3600;
	minuty = t / 60;
	t = t % 60;
	sekundy = t;

	cout << godziny << "g" << minuty << "m" << sekundy << "s";
}

int main() {
	int t;
	cin >> t;
	funkcjaDoZadania(t);

	return 0;
}