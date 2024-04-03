#include <iostream>

using namespace std;

int main() {
	int n, wynik = 0;
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i < n - 1; i++) {
		if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
			wynik++;
		}
	}

	cout << wynik;
}