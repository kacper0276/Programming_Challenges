#include <iostream>

using namespace std;

char changeCharacter(char znak) {
	if (znak == 'Z') {
		return 'A';
	}

	return (char)znak + 1;
}

int main()
{
	char znak1, znak2, znak3;

	cin >> znak1 >> znak2 >> znak3;

	cout << znak1 << " " << znak2 << " " << changeCharacter(znak3);
}
