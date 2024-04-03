#include <iostream>

using namespace std;

int main() {
	string pozycja1, pozycja2;

	cin >> pozycja1 >> pozycja2;

	if (pozycja1[0] != pozycja2[0] && pozycja1[1] != pozycja2[1]) {
		cout << "NIE";
	}
	else {
		cout << "TAK";
	}

	return 0;
}