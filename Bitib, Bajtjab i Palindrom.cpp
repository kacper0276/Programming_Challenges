#include <iostream>
#include <map>

using namespace std;

bool possible_build_palindrom(int* numbers, int n) {
	map<int, int> counter;
	bool odd = false;

	for (int i = 0; i < n; i++) {
		counter[numbers[i]]++;
	}

	for (auto it : counter) {
		if (odd && it.second % 2 != 0) {
			return false;
		}
		
		if (!odd && it.second % 2 != 0) {
			odd = true;
		}
	}

	return true;
}

int main() {
	int n;
	cin >> n;
	int* numbers = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	if (possible_build_palindrom(numbers, n)) {
		cout << "TAK";
	}
	else {
		cout << "NIE";
	}

	return 0;
}