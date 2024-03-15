#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool findElInOtherArr(int* arr, int liczba, int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == liczba) {
			return true;
		}
	}

	return false;
}

bool ifVectorContains(vector<int> vec, int a) {
	for (auto& el : vec) {
		if (el == a) {
			return true;
		}
	}

	return false;
}

int main() {
	vector<int> suma;
	vector<int> iloczyn;
	int a, b;
	cin >> a;
	int* tabA = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> tabA[i];
	}

	cin >> b;
	int* tabB = new int[b];
	for (int i = 0; i < b; i++) {
		cin >> tabB[i];
	}

	bool pierwszaWieksza = a >= b;

	// Suma
	for (int i = 0; i < a; i++) {
		if (!ifVectorContains(suma, tabA[i])) {
			suma.push_back(tabA[i]);
		}
	}

	for (int i = 0; i < b; i++) {
		if (!ifVectorContains(suma, tabB[i])) {
			suma.push_back(tabB[i]);
		}
	}

	sort(suma.begin(), suma.end());

	// Iloczyn
	if (pierwszaWieksza) {
		for (int i = 0; i < a; i++) {
			if (findElInOtherArr(tabB, tabA[i], b) && !ifVectorContains(iloczyn, tabA[i])) {
				iloczyn.push_back(tabA[i]);
			}
		}
	}
	else {
		for (int i = 0; i < b; i++) {
			if (findElInOtherArr(tabA, tabB[i], a) && !ifVectorContains(iloczyn, tabB[i])) {
				iloczyn.push_back(tabB[i]);
			}
		}
	}

	sort(iloczyn.begin(), iloczyn.end());

	for (auto& el : suma) {
		cout << el << " ";
	}
	cout << endl;

	if (iloczyn.size() == 0) {
		cout << "NULL";
	}
	else {
		for (auto& el : iloczyn) {
			cout << el << " ";
		}
	}
	cout << endl;

	return 0;
}