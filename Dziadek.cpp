#include <iostream>
#include <string>

using namespace std;

int countWord(string n) {
	int j = 0;

	for (int i = 0; i < n.length(); i += 3) {
		if (n[i] == 'p')
			j++;
	}

	return j;
}

int main() {
	string n;
	cin >> n;

	cout << countWord(n) + 2;

	return 0;
}