#include <iostream>

using namespace std;

int main() {
	char s;
	int w;

	cin >> s >> w;

	if (int(s) == w) {
		cout << "Wow! - Az mi skarpetki spadly!";
	}
	else {
		cout << "Ojc! - Nie ta melodia!";
	}

	return 0;
}