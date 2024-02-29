#include <iostream>
#include <vector>

using namespace std;

bool czy2(vector<int> tab) {
	for (auto el : tab) {
		if (el > 2) {
			return false;
		}
	}

	return true;
}

bool czy1(vector<int> tab) {
	for (auto el : tab) {
		if (el > 1) {
			return false;
		}
	}

	return true;
}

int funkcja(vector<int> tab, int n) {
	int res = 7;

	// 6 podpunkt
	if (n % 2 == 1) {
		res = 6;
	}

	// 5 podpunkt
	if (n % 2 == 0) {
		res = 5;
	}

	if (n <= 1000) {
		res = 4;
	}

	if (n <= 100) {
		res = 3;
	}

	if (czy2(tab)) {
		res = 2;
	}

	if (czy1(tab)) {
		res = 1;
	}

	return res;
}

int main() {
	int n;
	vector<int> tab;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int l;
		cin >> l;
		tab.push_back(l);
	}

	cout << funkcja(tab, n);
}