#include <iostream>

using namespace std;

int main() {
	int spacje = 4;
	int gwiazdki = 1;
	int pom = 2;

	while (pom--)
	{
		while (spacje > 0) {
			for (int i = 0; i < spacje; i++) {
				cout << " ";
			}
			for (int i = 0; i < gwiazdki; i++) {
				cout << "*";
			}
			cout << endl;
			gwiazdki += 2;
			spacje -= 1;
		}

		spacje = 4;
		gwiazdki = 1;
	}
	for (int i = 0; i < 9; i++) {
		cout << "*";
	}

	return 0;
}