#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min(vector<int> tab) {
	int min = tab[0];

	for (auto el : tab) {
		if (el < min) {
			min = el;
		}
	}

	return min;
}

int max(vector<int> tab) {
	int max = tab[0];

	for (auto el : tab) {
		if (el > max) {
			max = el;
		}
	}

	return max;
}

void usunWystapienie(vector<int>& vec, int elementDoUsuniecia) {
	auto it = find(vec.begin(), vec.end(), elementDoUsuniecia);

	if (it != vec.end()) {
		vec.erase(it);
	}
}

int main() {
	int n, liczba;
	char polecenie;
	vector<int> tab;

	cin >> n;

	while (n--) {
		cin >> polecenie;
		if (polecenie == 'u') {
			cin >> liczba;
			usunWystapienie(tab, liczba);
		}
		if (polecenie == 'z') {
			cin >> liczba;
			tab.push_back(liczba);
		}
		if (polecenie == 'r') {
			if (tab.size() != 0) {
				cout << max(tab) - min(tab) << endl;
			}
			else {
				cout << "PUSTO!" << endl;
			}
		}
	}

	return 0;
}