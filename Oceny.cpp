#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int* marks = new int[n];
	int res[7] = {0, 0, 0, 0, 0, 0, 0};

	for (int i = 0; i < n; i++) {
		cin >> marks[i];
	}

	for (int i = 0; i < n; i++) {
		res[marks[i]]++;
	}

	for (int i = 1; i < 7; i++) {
		cout << res[i] << " ";
	}
}