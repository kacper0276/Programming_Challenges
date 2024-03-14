#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<string, int> mapa;
	string napis;

	while (getline(cin, napis))
	{
		if (napis.empty()) {
			break;
		}

		mapa[napis]++;
	}

	for (auto& el : mapa) {
		if (el.second % 2 == 1) {
			cout << el.first;
			return 0;
		}
	}

	return 0;
}