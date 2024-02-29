#include <iostream>
#include <vector>

using namespace std;

// Sprawdzamy czy element musi "zabrać" kogos
bool existPair(vector<pair<long long, long long>> pary, long long szukana) {
	for (auto el : pary) {
		if (el.first == szukana) {
			return true;
		}
	}

	return false;
}

vector<long long> zwrocPary(vector<pair<long long, long long>> pary, long long szukana) {
	vector<long long> res;
	for (auto el : pary) {
		if (el.first == szukana) {
			res.push_back(el.second);
		}
	}

	res.push_back(szukana);

	return res;
}

// Czy istnieje w wektorze
bool exist(vector<long long> choosen, long long c) {
	for (auto el : choosen) {
		if (el == c) {
			return true;
		}
	}
	return false;
}

// Max z poziomów które nie były wybrane jeszcze
long long maxZpoziomRobotow(vector<long long> poziomRobotow, vector<long long> choosen) {
	long long max = 0;

	for (auto el : poziomRobotow) {
		if (el > max && !exist(choosen, el)) {
			max = el;
		}
	}

	return max;
}

vector<long long> logika(vector<long long> poziomRobotow, vector<pair<long long, long long>> pary, int k) {
	vector<long long> choosen;
	
	while (choosen.size() < k) {
		long long max = maxZpoziomRobotow(poziomRobotow, choosen);


		if (!existPair(pary, max)) {
			choosen.push_back(max);
		}
		else {
			vector<long long> res = zwrocPary(pary, max);
			for (auto el : res) {
				if (!exist(choosen, el)) {
					choosen.push_back(el);
				}
			}
		}
	}

	return choosen;
}

long long funkcja(vector<long long> poziomRobotow, vector<pair<long long, long long>> pary, int k) {
	vector<long long> choosen = logika(poziomRobotow, pary, k);
	long long suma = 0;

	for (auto el : choosen) {
		suma += el;
	}

	return suma;
}
	


// n - liczba robotów, m - liczba par zależności, k - maksymalna liczba robocików
int main() {
	int n, m, k;
	vector<long long> poziomRobotow;
	vector<pair<long long, long long>> pary;

	cin >> n >> m >> k;

	// Wczytanie poziomów robotów
	for (int i = 0; i < n; i++) {
		long long p;
		cin >> p;
		poziomRobotow.push_back(p);
	}

	// Wczytanie par
	while (m--) {
		long long a, b;
		cin >> a >> b;

		pary.push_back(make_pair(a, b));
	}

	cout << funkcja(poziomRobotow, pary, k);
}